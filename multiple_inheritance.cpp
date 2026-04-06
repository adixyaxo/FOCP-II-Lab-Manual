#include <iostream>

using namespace std;

class A
{
private:
    int a = 1;

public:
    A()
    {
        cout << "A constructor called" << endl;
    };
    ~A()
    {
        cout << "A destructor called" << endl;
    };

    void display_a()
    {
        cout << a << endl;
    }
};

class B : public A
{
    int b = 2;

public:
    B()
    {
        cout << "B constructor called" << endl;
    };
    ~B()
    {
        cout << "B destructor called" << endl;
    };
    void display_b()
    {
        display_a();
        cout << b << endl;
    }
};

class C : public A
{
    int c = 3;

public:
    C()
    {
        cout << "C constructor called" << endl;
    };
    ~C()
    {
        cout << "C destructor called" << endl;
    };
    void display_c()
    {
        display_a();
        cout << c << endl;
    }
};

class D : public B, public C
{
private:
    int d = 4;

public:
    D()
    {
        cout << "D constructor called " << endl;
    };
    ~D()
    {
        cout << "D destructor called" << endl;
    };
    void display_d()
    {
        display_a(); // dimond problem 
        display_b();
        display_c();
        cout << d << endl;
    }
};

int main()
{
    D D1;
    D1.display_d();
    return 0;
}
