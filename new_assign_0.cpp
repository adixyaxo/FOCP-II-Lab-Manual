#include <iostream>
using namespace std;

int main() {
    int *p = new int; // new se assign krenge toh 0 assign hoga
    cout << *p<<endl;
    delete p;
}