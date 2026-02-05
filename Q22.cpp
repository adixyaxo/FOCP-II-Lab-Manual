// Q22. A jewelry design tool generates hollow diamond outlines for patterns. Implement a solution to display a hollow diamond pattern of *.

#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << ' ';
    }
    cout << '*';
    for (int i = 0; i < 5; i++)
    {
        cout << ' ';
    }
    cout << endl;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 0; j < 5 - i; j++)
        {
            cout << ' ';
        }
        cout << '*';
        for (int j = 5 - i + 1; j < 5 + i; j++)
        {
            cout << ' ';
        }
        cout << '*';
        for (int j = 5 + i + 1; j < i; j++)
        {
            cout << ' ';
        }
        cout << endl;
    }
    for (int i = 4; i > 0; i--)
    {
        for (int j = 0; j < 5 - i; j++)
        {
            cout << ' ';
        }
        cout << '*';
        for (int j = 5 - i + 1; j < 5 + i; j++)
        {
            cout << ' ';
        }
        cout << '*';
        for (int j = 5 + i + 1; j < i; j++)
        {
            cout << ' ';
        }
        cout << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << ' ';
    }
    cout << '*';
    for (int i = 0; i < 5; i++)
    {
        cout << ' ';
    }

    return 0;
}
