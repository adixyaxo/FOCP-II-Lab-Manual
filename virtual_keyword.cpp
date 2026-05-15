#include <iostream>
using namespace std;

// virtual keyword has two use cases
// pahla jab hum kabhi bhi diamond case me jate hain ya fir jab confusion hoti hai compiler ko kyunki uske pass two options hote hain leading to same function tab error aata hai uss error se deal krne ke liye hum virtual use krte hain
// dusra hum use krte hain in case of overiding
// overiding ka matlab hai ki jab bhi hum ek base class se derived class banaenge toh uske function ko inherit krke change krenge toh usse overiding bolenge in case of virtual keyword overiding ke aur bhi matlab ho sakte hain in diffrent cases

class Base
{
private:

public:
   virtual void func1(){cout<< "Base"<<endl;}

   void func2(int x){ cout << "Base func2"<<endl;}

};

class derived : public Base
{
private:
  /* data */
public:
  void func1(){cout<< "Derived"<<endl;}

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
  Base* base_to_player = new derived;
  // derived* player_to_base = b_ptr;ye possible hi nahi krna kyunki a value of type "Base *" cannot be used to initialize an entity of type "derived *
  cout<<endl;
  base_to_player->func1();
  base_to_player->func2(10);





  return 0;
}