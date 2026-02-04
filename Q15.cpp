// Q15. A data analytics tool finds the maximum sales figure from multiple entries. Implement a solution to accept ‘n’ numbers and display the largest.

#include <iostream>
using namespace std;

int main()
{
    int n, max = 0, input;
    cout << "Enter how many numbers do you want to store  ::  ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " sales figure :: ";
        cin >> input;
        if (input > max)
        {
            max = input;
        }
    }
    cout << "The maximum number is :: " << max;

    return 0;
}