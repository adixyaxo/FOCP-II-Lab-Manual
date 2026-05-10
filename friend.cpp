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
    /*
    Friend functions in C++ are primarily used to grant non-member functions access to the private and protected members of a class.  This feature is essential for several specific scenarios:

    Operator Overloading: They allow operators to access private data when the operation involves multiple objects or types that do not fit naturally into a member function signature.
    Inter-Class Communication: They enable tight coupling between classes, allowing one class to share internal details with another without exposing them publicly.
    Encapsulation Balance: They provide a controlled way to expose specific internal data to external functions, maintaining better encapsulation than making all data public while avoiding the verbosity of multiple getter and setter methods.
    However, because friend functions break strict encapsulation and can increase coupling between classes, they should be used judiciously to avoid making code difficult to maintain or debug.
    */
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