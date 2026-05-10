#include <iostream>
using namespace std;

static int x = 10; // here we are using static globally ie outside of a class thus here the use of static keyword is diffrent here
// here the keyword static makes the integer x private for the file ie other cpp files wont be able to access my variable x
// this is only going to be visible for this c++ file and invisible to the other c++ files
// this is very important for privacy and coding and not having bugs with totally global varibales for all files which is pretty specifically bad

// same way it works for the functions
static void print(void){cout<<"This is a static function only working in this file"<<endl;}

class box
{
private:
    double l;
    double w;
    double h;

public:
    static int count; // here the usage of static is inside the class hence the count has become a single variable which would be refered by all the objects of this class
    // ie all the objects of this class are going to refer to the same cout ie the count of the class
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