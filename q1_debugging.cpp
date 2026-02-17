#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of terms: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "Invalid Input";
    }
    int c, a = 0, b = 1;
    cout << a << " " << b << " ";
    for (int i = 2; i < n; i++)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    return 0;
}

// Output is : if N is 6, Output would be: 0 1 1 2 3 5

/*
Errors Found :
1 . Missing semicolon in line 2,5,6,10,16,18,19,21
2. Extra Semicolon in line 8
3. Wrong use of the brackets ie >> will come after cin in line 7 instead of <<
4. In line 12 the declared and non defined variables would come infront of the defined and declared variables ie c will come first than a and b
5. i++ ie there should be increment in the i variable of the loop rather than i--  ie decrement because decrement of i would cause infinite loop case and is also logically incorrect
6. In the line 19 we need to assign the value of c in b thus = ie equal operator will be used instead of == ie comparison operator
7. we need n no of terms ie 2 + no of terms in the loop so we need to run the loop for n-2 times more thus we need to run it from 2 to <n thus <n would come inplace of <= in the lin e 14
*/