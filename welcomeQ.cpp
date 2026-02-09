#include <iostream>
using namespace std;

void welcome(string a = "Guest", string b = "")
{

    cout << "Welcome " << a << " " << b << endl;
}

int main()
{
    welcome();
    welcome("Aditya");
    welcome("Aditya", "Dagar");

    return 0;
}