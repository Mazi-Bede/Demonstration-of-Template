// Program to demonstrate Templates

#include <iostream>
using namespace std;

template <class AnyType>
AnyType sum (AnyType a, AnyType b, AnyType c)
{
    return a * b / c;
}


int main ()
{
    int x;
    double y;
    string check;
    x = sum (8, 9, 5);
    y = sum (4.23, 63.17, 9.09);

    cout << "x is: " << x << "\ny is: " << y << endl;
    
    return 0;
}
