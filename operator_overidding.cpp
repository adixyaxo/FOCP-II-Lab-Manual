#include <iostream>
using namespace std;

class Shape
{
public:
    Shape() { cout << "\nShape default constructor called\n"; }
    ~Shape() { cout << "\nShape destructor called\n"; }
    void area() { cout << "\n No dim no area"; }
    void display() { cout << "\n we are 2d shapes"; }
};

class Rectangle : public Shape
{
private:
    int length, width;

public:
    Rectangle(int l = 5, int w = 10) : length(l), width(w) { cout << "Rectangle Object Created"; }
    void area() { cout << "\n area= " << length * width; }
    ~Rectangle() {};
};

int main()
{

    Shape s1;
    Rectangle r1, r2(50, 45);
    s1.area();
    r2.area();
    r2.Shape::area();
    r2.display();
    r2.display();
    return 0;
}