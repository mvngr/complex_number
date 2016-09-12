#ifndef COMPLEXNUM_H
#define COMPLEXNUM_H
#include <iostream>

using namespace std;

class ComplexNum
{
public:
    double rez, imz;

    ComplexNum(int inRez, int inImz);
    ComplexNum(double inRez, double inImz);
    ~ComplexNum();

    void print();

    ComplexNum operator+(ComplexNum const &a);
    ComplexNum & operator=(ComplexNum const &a);
    ComplexNum operator-(ComplexNum const &a);
    ComplexNum operator*(ComplexNum const &a);
    ComplexNum operator/(ComplexNum const &a);

};

#endif // COMPLEX_NUM_H
