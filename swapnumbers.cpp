#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int local;
    local = *x;
    *x = *y;
    *y = local;
}

void swaprefrence(int &x, int &y)
{
    int local;
    local = x;
    x = y;
    y = local;
}

int main()
{
    int x = 11, y = 29;
    cout << x << endl;
    cout << y << endl
         << endl;
    swap(x, y);
    cout << x << endl;
    cout << y << endl
         << endl;
    swaprefrence(x, y);
    cout << x << endl;
    cout << y << endl;

    return 0;
}