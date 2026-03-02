#include <iostream>
using namespace std;

// What is encapsulation in C++?
// Encapsulation is one of the fundamental principles of object-oriented programming (OOP) in C
class student
{
private:
    int marks;

public:
    void setMarks(int m)
    {
        marks = m;
    }
    int getMarks()
    {
        return marks;
    }
};

int main()
    student s1;
s1.setMarks(95);
cout << "Marks: " << s1.getMarks() << endl;
{

    return 0;
}