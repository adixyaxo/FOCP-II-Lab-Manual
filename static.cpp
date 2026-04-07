#include <iostream>
using namespace std;

class box
{
private:
    double l;
    double w;
    double h;

public:
    static int count;
    box(double length = 0, double width = 0, double height = 0)
    {
        l = length;
        w = width;
        h = height;
    };
    ~box() {};
    double volume()
    {
        return l * w * h;
    }
    void display()
    {
        cout << "Length  ::  " << l << endl;
        cout << "Width  ::  " << w << endl;
        cout << "Height  ::  " << h << endl;
        count++;
    }
};

int box::count; // automatically will get initialised by zero

int main()
{
    box box1(3.3, 1.2, 1.5);
    box box2(8.0, 6.0, 2.0);
    box1.display();
    box2.display();
    cout << "Volume of box1 is " << box1.volume() << endl;
    cout << "Volume of box2 is " << box2.volume() << endl;
    cout << box1.count << endl;
    return 0;
}