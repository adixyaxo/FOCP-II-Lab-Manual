#include <iostream>
#include <string>
using namespace std;

int main()
{
    string batch;
    cin.ignore();        // cleans the old buffer when reading multiple lines at once or multiple inputs at once
    getline(cin, batch); // reads the whole line rather than one word takes enter for the input not space
    return 0;
}