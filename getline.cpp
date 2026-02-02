// This programme is to learn about the getline feature in C++

// NOTE IMPORTANT :: cin.ignore(); dont use if you havent usen cin befor ignore statement else it will eat the first char like you use ignore func and you havent taken any input before that in that case

#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x; // Read an integer input
    string line;
    // cin >> line; // This will only read up to the first whitespace
    cin.ignore();       // To ignore any leftover newline character in the input buffer
    getline(cin, line); // Read a full line of text
    cout << "You entered integer: " << x << endl;
    cout << "You entered line: " << line << endl;
    return 0;
}