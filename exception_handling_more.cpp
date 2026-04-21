#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    int age;
    cout << "Enter age : ";
    cin >> age;
    try
    {
        if (age < 0)
        {
            throw invalid_argument("Age connot be negative");
        }
        cout << "Valid age : " << age << endl;
    }
    catch (invalid_argument &e)
    {
        cout << "Exception : " << e.what() << '\n';
    }

    return 0;
}