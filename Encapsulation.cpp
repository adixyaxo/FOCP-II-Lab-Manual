#include <iostream>
using namespace std;

// What is encapsulation in C++?
// Encapsulation is one of the fundamental principles of object-oriented programming (OOP) in C++. It refers to the bundling of data (attributes) and methods (functions) that operate on that data into a single unit called a class. Encapsulation allows for data hiding, which means that the internal representation of an object is hidden from the outside world, and access to that data is restricted through public member functions (getters and setters). This helps to protect the integrity of the data and prevents unauthorized access or modification.
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
{
    student s1;
    s1.setMarks(95);
    cout << "Marks: " << s1.getMarks() << endl;

    return 0;
}