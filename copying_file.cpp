#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("./data.txt");
    string line;
    while (getline(fin, line))
    {
        fstream fout("copydata.txt", ios::app);
        fout << line << endl;
        fout.close();
    }
    fin.close();

    return 0;
}