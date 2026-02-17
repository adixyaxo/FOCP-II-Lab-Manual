#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 2, 3, 1};
    int dupchk[5] = {-1};

    int dupchki = 0;
    for (int i = 0; i < 5; i++)
    {
        int count = 0;
        int brk = -1;
        for (int z = 0; z < 5; z++)
        {
            if (dupchk[z] == arr[i])
            {
                brk = 0;
            }
        }
        if (brk == 0)
        {
            continue;
        }
        else
        {
            dupchk[dupchki] = arr[i];
            dupchki++;
        }

        for (int j = 0; j < 5; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }

        cout << arr[i] << " occurs " << count << " times\n";
    }

    return 0;
}

/*
Errors found :
There is no syntax error but there is logical issue of repeating values which can be fixed by taking one more array and finding repeating values through putting the values side by side in that array
We will create one more array where we will store the non repeating values and check if the values are repeating or not from the dupchk array ie the duplicatecheck array
*/