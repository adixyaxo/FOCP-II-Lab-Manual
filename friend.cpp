#include <iostream>
using namespace std;

class rectangle
{
private:
    int length, width;

public:
    rectangle()
    {
        length = 0;
        width = 0;
    };
    rectangle(int length, int width)
    {
        this->length = length;
        this->width = width;
    };
    ~rectangle() {

    };
    friend void area(rectangle obj);
    void display();
};

void rectangle::display()
{
    cout << "length :: " << length << "\nwidth  :: " << width << endl;
};
void area(rectangle obj)
{
    cout << obj.length * obj.width;
}

int main()
{
    rectangle r1, r2(10, 20);
    r1.display();
    r2.display();
    rectangle obj1(10, 20);
    area(obj1);
    return 0;
}