#include <iostream>
using namespace std;
#include <string>
template <class T1=int,class T2=int,class T3=float,class T4=float>
class my_class
{
private:
  T1 a;
  T2 b;
  T3 c;
  T4 d;
public:
  my_class(T1 a,T2 b,T3 c,T4 d){
    this-> a = a;
    this-> b = b;
    this-> c = c;
    this-> d = d;
  };
  void display(void){
    cout<<a<<" : "<<b<<" : "<<c<<" : "<<d<<endl;
  }
};

int main() {
my_class c1(10,11,10.5,11.5);
c1.display();
my_class <int,char,string,double> c2(10,'A',"This is a string",11.523132);
c2.display();
  return 0;
}