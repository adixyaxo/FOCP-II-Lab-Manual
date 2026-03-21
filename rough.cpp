#include <iostream>
using namespace std;

int main()
{
    for (int j = 0; j < 6; j++)
    {
        for (int i = 0; i < j; i++)
        {
            cout << "*";
        }
        for (int i = j + 1; i < 10 - j; i++)
        {
            cout << " ";
        }
        for (int i = 10 - j; i < 10; i++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}