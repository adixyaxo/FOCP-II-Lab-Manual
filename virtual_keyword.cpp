#include <iostream>
using namespace std;

// virtual keyword mainly do jagah useful hota hai

// 1. Function overriding me
// agar base class ka function virtual ho,
// aur derived class usko override kare,
// toh base class pointer se bhi derived function call hota hai.
// Isko runtime polymorphism bolte hain.

// 2. Diamond problem me
// multiple inheritance me ambiguity avoid karne ke liye
// virtual inheritance use hoti hai.

class Base
{
private:

public:
   void func1(){cout<< "Base"<<endl;}

   void func2(int x){ cout << "Base func2"<<endl;}

};

class derived : public Base
{
private:
  /* data */
public:
  void func1() {cout<< "Derived"<<endl;}

  void func2(){ cout << "Derived func2"<<endl;}
};


int main() {
  Base b1;
  derived d1;
  b1.func1();
  b1.func2(10);
  cout << endl;
  d1.func1();
  d1.func2();

  cout<<endl<<"---"<<endl;

  Base* b_ptr = new Base();
  derived* d_ptr = new derived();
  // b_ptr.func1();
  // b_ptr.func2(10);
  // ye dono galat use cases hain jab bhi hum class ka pointer banate hain toh hame hamesha -> use krna hai na ki .
  // -> use hoga class pointer ke liye
  // . use hoga normal class ke liye

  b_ptr->func1();
  b_ptr->func2(10);
  cout<<endl;
  d_ptr->func1();
  d_ptr->func2();
  cout<<endl;
  d_ptr->Base::func1(); // hamesha base ka hi run krega chahe kuch ho jae
  d_ptr->Base::func2(10); // hamesha base ka hi run krega chahe kuch ho jae
  cout<<endl;


  Base* base_to_derived = new derived;
  //derived* derived_to_base = b_ptr;ye possible hi nahi krna kyunki a value of type "Base *" cannot be used to initialize an entity of type "derived *
  cout<<endl;
  base_to_derived->func1();
// base_to_derived ek Base type pointer hai toh agar virtual nahi use hora kahin bhi toh base ke hi functions call honge
// lekin ye actually derived object ko point kar raha hai
// toh agar func1 virtual hua toh
// runtime pe derived class ka func1 call hoga

// in short
// agar base virtual hai toh derived call hoga and agar virtual nahi hai toh base call hoga

  base_to_derived->func2(10); // base will be called always doesnt matter if the func is virtual or not because the definition of both functions is not same





  return 0;
}