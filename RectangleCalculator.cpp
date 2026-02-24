#include <iostream>
using namespace std;

class RectangleCalculator
{
private:
    int length, width;

public:
    void inputDimensions();
    float calculateArea();
    float calculatePerimeter();
    void displayResults();
    RectangleCalculator(int l, int w);
};

void RectangleCalculator::inputDimensions()
{
    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;
}
float RectangleCalculator::calculateArea()
{
    return length * width;
}
float RectangleCalculator::calculatePerimeter()
{
    return 2 * (length + width);
}
void RectangleCalculator::displayResults()
{
    cout << "Area of the rectangle: " << calculateArea() << endl;
    cout << "Perimeter of the rectangle: " << calculatePerimeter() << endl;
}

RectangleCalculator::RectangleCalculator(int l, int w)
{
    length = l;
    width = w;
}

int main()
{

    return 0;
}