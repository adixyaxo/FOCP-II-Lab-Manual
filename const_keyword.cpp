#include <iostream>
using namespace std;

int main() {
  // const is bit of fake keyword
  int a = 5 ; // i am free to change this integer in future
  const int const_a = 5; // this variable is a constant which cannot be changed

  cout << a << " :: " <<&a<<endl;
  int *ptr = new int;
  *ptr = 2; // here we are just changing the value being pointed to
  cout << *ptr <<" :: " <<ptr << " :: " <<&ptr<<endl;
  ptr = (int*)&a; // here we are making ptr point to the memory address of variable a so ptr will store the value of a
  cout << *ptr << " :: " <<ptr << " :: " <<&ptr<<endl;


  cout << endl << endl;
  const int* pointer_pointer_changable = new int(2);// Here the value is not changable but the pointer is changable because *pointer_pointer_changable is the value which is const but pointer_pointer_changable is the address or the pointer which is not a const hence is changable


  cout << *pointer_pointer_changable << " :: " <<pointer_pointer_changable << " :: " <<&pointer_pointer_changable<<endl;
  // int const* pointer = new int(a); this is same as writing above line NOTE
  // *pointer_pointer_changable = *ptr; cant do this ie cant change contents of pointer
  pointer_pointer_changable = ptr; // can do this

  cout << *pointer_pointer_changable << " :: " <<pointer_pointer_changable << " :: " <<&pointer_pointer_changable<<endl;

  cout << endl << endl;



  int* const pointer_value_changable = new int(2); // pointer is not changable ie address is not changable but value is changable cause pointer_value_changable is the address and *point_value_changable is the value

  cout << *pointer_value_changable << " :: " <<pointer_value_changable << " :: " <<&pointer_value_changable<<endl;

  *pointer_value_changable = *ptr;
  // pointer_address_not_changable = ptr; cant happen

  cout << *pointer_value_changable << " :: " <<pointer_value_changable << " :: " <<&pointer_value_changable<<endl;
  return 0;
}