#include <iostream>
using namespace std;

int sum(int a, int b) // backward Decleraion
{
    cout << "int  ";
    return a + b;
}

double sum(double a, double b); // forward Decleration

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