#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person()
    {
        cout << "Default constructor called" << endl;
        name = "Unknown";
        age = 0;
    }

    Person(string n, int a)
    {
        cout << "Parameterized constructor called" << endl;
        name = n;
        age = a;
    }

    void displayInfo()
    {
        cout << "Name: " << name << ", Age: " << age << endl
             << endl;
    }
};

class Student : public Person
{
public:
    string studentID;

    Student() : Person()
    {
        cout << "Student default constructor called" << endl;
        studentID = "Unknown";
    }

    Student(string n, int a, string id) : Person(n, a)
    {
        cout << "Student parameterized constructor called" << endl;
        studentID = id;
    }

    void displayInfo()
    {
        Person::displayInfo();
        cout << "Student ID: " << studentID << endl
             << endl;
    }
};

int main()
{
    Person p1;
    p1.displayInfo();
    Student s1;
    s1.displayInfo();
    Person p2("Alice", 30);
    p2.displayInfo();
    Student s2("Bob", 20, "S12345");
    s2.displayInfo();

    return 0;
}