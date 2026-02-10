#include <iostream>
using namespace std;

// polymorphism means ki tum ek hi function ke same name se diffrent func bana sakte ho if there are diffrent data types

int sum(int a, int b) // backward Decleraion
{
    cout << "int  ";
    return a + b;
}

double sum(double, double); // forward Decleration

float sum(float a, float b)
{
    cout << "float  ";
    return a + b;
} // backward Decleration

int main()
{
    cout << sum(10, 20) << endl;
    cout << sum(10.34239F, 20.223F) << endl;
    cout << sum(100.023423234234234423, 12.123423423424342) << endl;

    return 0;
}

double sum(double a, double b)
{
    cout << "double  ";
    return a + b;
}

// if you get an ambiguity error check your function type

// for simmilar functions first the programme looks in the following order of simmilarity towards giving same name of function error
/*
1. Name of the function
2. No of parameters
3. Data type of the function
*/