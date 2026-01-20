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