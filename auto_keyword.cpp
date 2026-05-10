#include <iostream>
#include <string>
using namespace std;

auto func(auto &i){ // only word for c++ more than 20 thus use templates
return i;
}

int main() {

  int a = 10;
  auto a_auto = a;
  // here a_auto will automatically become an int

  // also we can do
  auto hey = "This is a char*";
  // here hey would automatically become a const char*

  // we can also use functions as auto as i dont want to deal with making many functions with multiple return types and multiple input types

  auto a_copy = func(a);
  cout << a_copy;
  cout << func("hey hello");

  // but auto can also break right
  auto string_var = "This should be a string";
  // cout << string_var.length(); i assumed i am passing string to auto string_var it would also store it as a string but it didnt for it to happen i would have to decare it string first
  auto string_var_real = (string)("This is a string");
  cout << string_var_real.length();
  // now this would work perfectly fine
  // auto is a feature not a nessesaty only use it when you really have to
  return 0;
}