#include <iostream>
using namespace std;

template <class t1 = float,class t2 = float,class r = int>
r average(t1 a, t2 b){
  r ans = (a+b)/2;
  return ans;
}

template <class T>
void swapp(T &a, T &b){
T temp = a;
a = b;
b = temp;
}

int main() {
cout << average<int,int,int>(10,11)<<endl;
cout << average<float,float,float>(11.9,12.3)<<endl;

float a = 10.0;
float b = 11.12;
cout << "a :: "<<a<<" || b :: "<<b<<endl;
swapp<float>(a,b);

cout << "a :: "<<a<<" || b :: "<<b<<endl;
  return 0;
}