#include <iostream>
using namespace std;

// Question of the Day!!
// Design a C++ program that simulates a basic Candy Crush game element using class and object creation.
// Create a class Candy with the following attributes:
// •	string color (stores the color of the candy)
// •	int points (stores the points awarded)
// The class should have the following member functions:
// •	setCandy(string c, int p): Sets the color and points of the candy.
// •	displayCandy(): Displays the color and points of the candy.
// In main(), create two Candy objects, set their values using setCandy method, and display them using displayCandy().

class candy
{
private:
    string color;
    int points;

public:
    void setcandy(string clr, int pt);
    void displayCandy();
    candy(string clr, int pt);
};

void candy::setcandy(string clr, int pt)
{
    color = clr;
    points = pt;
}

void candy ::displayCandy()
{
    cout << "Color: " << color << ", Points: " << points << endl;
}

candy::candy(string clr, int pt)
{
    string color = clr;
    int point = pt;
}

int main()
{
    candy candy1("Red", 10);
    candy candy2("Green", 20);
    candy1.displayCandy();
    candy2.displayCandy();
    candy1.setcandy("Yellow", 15);
    candy1.displayCandy();
    candy2.setcandy("Blue", 25);
    candy2.displayCandy();

    return 0;
}