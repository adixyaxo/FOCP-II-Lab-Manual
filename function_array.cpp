// Passing an array in a function with function(arr,sizeofarray)

#include <iostream>
using namespace std;

void cf(int arr[], int n)
{
    int max = 0, min = arr[0], total = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
        total += arr[i];
    }
    cout << "The max number is  ::  " << max << endl;
    cout << "The min number is  ::  " << min << endl;
    cout << "The average is  ::  " << total / n << endl;
}

int main()
{
    int marks[10] = {56, 78, 67, 43, 42, 43, 32, 32, 12, 31};
    cf(marks, 10);
    return 0;
}