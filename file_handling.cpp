#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("./aditya.txt"); // fout is the file name

    fout << "Lets try new data \n";
    fout << "This is file handling in c++ where ios::out truncates the file";
    fout.close();

    cout << "Data written succesfully\n"
         << endl;

    ifstream fin("./aditya.txt"); // fin is the file name

    string line;
    int count_line = 0;

    while (getline(fin, line))
    {
        cout << line << endl;
        count_line++;
    }
    cout << "No of lines are  ::  " << count_line << endl
         << endl;
    fin.close();

    // we can also use fin
    ifstream fin2("./aditya.txt"); // fin is the file name
    int count = 0;
    string word;

    while (fin2 >> word)
    {
        cout << word << " ";
        count++;
    }
    cout << "\nNo of words are  ::  " << count_line << endl;

    fin2.close();

    return 0;
}