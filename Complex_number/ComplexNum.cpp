#include "ComplexNum.h"

ComplexNum::ComplexNum(int inRez, int inImz)
{
    rez = (double)inRez;
    imz = (double)inImz;
}
ComplexNum::ComplexNum(double inRez, double inImz)
{
    rez = inRez;
    imz = inImz;
}
ComplexNum::~ComplexNum()
{

}
void ComplexNum::print()
{
    cout << "z = " << rez << " + " << imz << "*i";
    return;
}
ComplexNum ComplexNum::operator+(ComplexNum const & a)
{
    return ComplexNum(a.rez + this->rez, a.imz + this->imz);
}
ComplexNum & ComplexNum::operator =(ComplexNum const & b)
{
    this->imz = b.imz;
    this->rez = b.rez;
    return *this;
}
ComplexNum ComplexNum::operator-(ComplexNum const &a)
{
    return ComplexNum(this->rez - a.rez, this->imz - a.imz);
}
ComplexNum ComplexNum::operator*(ComplexNum const &a)
{
    return ComplexNum(-(this->imz*a.imz) + this->rez*a.rez,
                      this->imz*a.rez + this->rez*a.imz);
}
ComplexNum ComplexNum::operator/(ComplexNum const &a)
{
    double denomerator = a.rez*a.rez + a.imz*a.imz;
    ComplexNum n = ComplexNum(this->rez, this->imz);//костыль1
    ComplexNum x = ComplexNum(a.rez, -a.imz);//костыль2
    n = n*x;
    n.imz/=denomerator;
    n.rez/=denomerator;
    return n;
}

