#include <iostream>
#include <exception>
using namespace std;

int main()
{
    int a = 10, b = 0;

    try
    {
        /* code */
    }
    catch(const char* e)
    {
        std::cerr << e.what() << '\n';
    }

    cout << "Programme continues ..." << endl;
    return 0;
}