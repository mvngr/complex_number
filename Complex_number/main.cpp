#include <iostream>
#include "ComplexNum.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите";
    ComplexNum a = ComplexNum(-1, 2);
    ComplexNum b = ComplexNum(7, -3);

    a = a / b;
    a.print();

    return 0;
}
