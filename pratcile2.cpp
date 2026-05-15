#include <iostream>
using namespace std;
class Base{
public:
    ~Base(){
        cout<<"Base"<<endl;
    }
};
class Derived : public Base{
public:
    ~Derived(){
        cout<<"Derived";
    }
};
int main(){
    Base *ptr = new Derived();
    delete ptr;
}