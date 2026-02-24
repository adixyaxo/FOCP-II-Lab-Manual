#include <iostream>
using namespace std;
class student
{
private:
    int rollNo;
    string name;
    int marks1;
    int marks2;
    int marks3;

public:
    void inputDetails();
    int calculateTotal();
    void displayDetails();
    student();
    student(int, string);
    student(int, string, int, int, int);
};
void student::inputDetails()
{
    cout << "enter your roll number, name, marks1, marks2, marks3 " << endl;
    cin >> rollNo >> name >> marks1 >> marks2 >> marks3;
}
int student::calculateTotal()
{
    return marks1 + marks2 + marks3;
}
void student::displayDetails()
{
    cout << "roll number: " << rollNo << endl;
    cout << "name: " << name << endl;
    cout << "marks1: " << marks1 << endl;
    cout << "marks2: " << marks2 << endl;
    cout << "marks3: " << marks3 << endl;
    cout << "total marks: " << calculateTotal() << endl;
}
student::student()
{
    rollNo = 0;
    name = "unknown";
    marks1 = marks2 = marks3 = 0;
}
student::student(int r, string n)
{
    rollNo = r;
    name = n;
    marks1 = marks2 = marks3 = 0;
}
student::student(int r, string n, int m1, int m2, int m3)
{
    rollNo = r;
    name = n;
    marks1 = m1;
    marks2 = m2;
    marks3 = m3;
}
int main()
{
    student s1;
    s1.inputDetails();
    s1.displayDetails();

    student s2(101, "john");
    s2.displayDetails();

    student s3(102, "doe", 85, 90, 95);
    s3.displayDetails();

    return 0;
}