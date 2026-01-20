// Today we are working with the standard input output using the ios stream

#include <iostream>

using namespace std;

int main()
{

    int rno, m1, m2, m3, m4, m5;
    cout << "Please enter your roll no :: ";
    cin >> rno;
    cout << "\nPlease enter your marks in 5 subjects\n";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;
    cout << "Your roll no is " << rno << "\n";
    cout << "Your marks are :: \nFirst Subject :: " << m1 << "\nSecond Subject :: " << m2 << "\nThird Subject :: " << m3 << "\nFourth Subject :: " << m4 << "\nFifth Subject :: " << m5;

    return 0; // Code is also working without this
}
