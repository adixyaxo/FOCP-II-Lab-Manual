#include <iostream>
using namespace std;
int diff(void);       // forward indexing
int sum(int a, int b) // backward indexing
{
    return a + b;
}

int main()
{
    cout << sum(10, 20);
    return 0;
}

int diff(int a, int b)
{
    return a - b;
}