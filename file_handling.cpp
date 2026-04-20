#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("./aditya.txt");

    fout << "Lets try new data \n";
    fout << "This is file handling in c++ where ios::out truncates the file";
    fout.close();

    cout << "Data written succesfully";
    return 0;
}