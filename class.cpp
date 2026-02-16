#include <iostream>
using namespace std;
class Car
{
    /* By default all the variables of the class are considers as private variables by default which cannot be accessed in the programme or the main function */
    int make_year;
    string color;

public: // for enabling access to be able to change the variable value outside of the main function to allow access and to access the function and data outside in public
    /* By default all the functions of the class are considers as private functions by default which cannot be accessed in the programme or the main function */

    string car_type;

    void display()
    {
        cout << make_year << endl;
        cout << color << endl;
        cout << car_type << endl;
    }
    void car_entry()
    {
        cout << "Enter the build year of the car  ::  ";
        cin >> make_year;
        cout << "Enter the color of the car  ::  ";
        cin >> color;
        cout << "Enter the type of the car  ::  ";
        cin >> car_type;
    }
};

int main()
{

    Car c1;
    c1.car_entry();
    c1.display();

    // c1.make_year = 2000;
    /* will give this error
   class.cpp: In function 'int main()':
   class.cpp:28:8: error: 'int Car::make_year' is private within this context
        c1.make_year = 2000;
           ^~~~~~~~~
   class.cpp:6:21: note: declared private here
        int make_year = 1000;
                        ^~~~*/

    cout << endl;
    c1.car_type = "hatchback";
    c1.display();

    return 0;
}