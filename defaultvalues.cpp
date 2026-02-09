#include <iostream>
using namespace std;

// you have to tell the default values in the declearation in the forward refrencing

void welcome(string = "This is a default string");
int main()
{
    welcome();
    cout << endl;
    welcome("Welcome to india");

    return 0;
}

void welcome(string a)
{
    cout << a;
}