#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *pointer = &a;
    int &refrence = a;
    int &refrenceofrefrence = refrence;
    int &refrenceofrefrenceofrefrence = refrenceofrefrence;
    int &refrenceofpointer = *pointer;
    int *pointerofpointer = &*pointer;

    cout << "a  ::  " << a << endl;                                 // value of a
    cout << "&a  ::  " << &a << endl;                               // address of a
    cout << "pointer  ::  " << pointer << endl;                     // &a ie address of a
    cout << "*pointer  ::  " << *pointer << endl;                   // value at pointer ie value at address stored in pointer ie value at &a which is value of a
    cout << "&pointer  ::  " << &pointer << endl;                   // address of the pointer variable itself
    cout << "pointerofpointer  ::  " << pointerofpointer << endl;   // address of the variable stored in pointerofpointer ie *pointer so the value of pointerofpointer is address of *pointer ie address of value stored in pointer which is address of a
    cout << "*pointerofpointer  ::  " << *pointerofpointer << endl; // value at address stored in pointerofpointer which is address of *pointer so value at address of a which is value of a
    cout << "&pointerofpointer  ::  " << &pointerofpointer << endl;
    cout << "refrence  ::  " << refrence << endl;
    cout << "&refrence  ::  " << &refrence << endl;
    cout << "refrenceofrefrence  ::  " << refrenceofrefrence << endl;
    cout << "&refrenceofrefrence  ::  " << &refrenceofrefrence << endl;
    cout << "refrenceofpointer  ::  " << refrenceofpointer << endl;
    cout << "&refrenceofpointer  ::  " << &refrenceofpointer << endl;
    cout << "refrenceofrefrenceofrefrence  ::  " << refrenceofrefrenceofrefrence << endl;
    cout << "&refrenceofrefrenceofrefrence  ::  " << &refrenceofrefrenceofrefrence << endl;

    // No matter how many layers of refrence we create the same value will always be stored in same address and all the refrences would act like a shortcut to the original variable and all the refrences will have same address as the original variable and all the refrences will have same value as the original variable

    return 0;
}