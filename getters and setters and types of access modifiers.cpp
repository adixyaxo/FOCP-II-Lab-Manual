#include <iostream>
using namespace std;
class student
{
    // Starting we have Access Modifiers/Specifiers which are of three types:
    // 1. Public: Members declared as public are accessible from outside the class. They can be accessed by any code that has visibility of the class object. Public members are typically used for functions that need to be called from outside the class, such as getters and setters, or for data members that need to be accessed directly.
    // 2. Private: Members declared as private are only accessible within the class itself. They cannot be accessed from outside the class, including by derived classes. Private members are typically used for data members that should not be accessed directly from outside the class, and for helper functions that are only used internally within the class.
    // 3. Protected: Members declared as protected are accessible within the class and by derived classes, but not from outside the class. Protected members are typically used for data members that should be accessible to derived classes, but not to other code outside the class.
private:
    int marks;

public:
    string name;
    string section;

    // getters and setters are used to access private members of a class. They provide a way to read and modify the value of private data members while maintaining encapsulation. A getter is a member function that returns the value of a private data member, while a setter is a member function that sets the value of a private data member.

    // example getter
    int getMarks(student s)
    {
        return s.marks;
    }
    void setMarks(student &s, int m)
    {
        s.marks = m;
    }
};

int main()
{
    student s1;
    s1.name = "Aditya";
    s1.section = "A";

    // s1.marks = 95; // this will give an error because marks is a private member and cannot be accessed directly from outside the class. We need to use the setter function to set the value of marks and the getter function to retrieve it.
    cout << "Name: " << s1.name << ", Section: " << s1.section << ", Marks: " << s1.getMarks(s1) << endl;
    s1.setMarks(s1, 98);
    cout << "Updated Marks: " << s1.getMarks(s1) << endl;

    return 0;
}