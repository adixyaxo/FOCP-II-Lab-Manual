#include <iostream>
using namespace std;

class Numbers
{
public:
    int a, b;
    static int s; // will be initialised by zero
    Numbers();
    ~Numbers();
};

Numbers::Numbers(/* args */)
{
}

Numbers::~Numbers()
{
}

int Numbers::s;

int main()
{
    Numbers num;
    cout << num.a << endl
         << num.b << endl
         << num.s << endl;

    return 0;
}