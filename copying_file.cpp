#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("./data.txt");
    fstream fout("copydata.txt", ios::app);
    string line;
    while (getline(fin, line))
    {
        fout << line << endl;
    }
    fout.close();
    fin.close();

    return 0;
}