#include <iostream>
using namespace std;

class new_keyword
{
private:
  /* data */
public:
  new_keyword(/* args */);
  ~new_keyword();
};

new_keyword::new_keyword(/* args */)
{
}

new_keyword::~new_keyword()
{
}


// The purpose of new keyword is to allocate memory to the heap specifically

int main() {

  int a = 2;

  int* a_ptr = new int(2);
  cout << *a_ptr << " :: "<< a_ptr << endl;
  int* b = new int[50]; // 200 bytes of memory

  new_keyword* objs = new new_keyword[50]; // it does two things in this case it sees how much memory does one obj will take and then multiples it by 50 and asks for that much memory and then stores the obj arrays in that meomory in a contigous row
  // the new keyword in classes not only allocates the classes with memory but also calls their constructors

  new_keyword* obj = new new_keyword();
  new_keyword* objm = (new_keyword*)malloc(sizeof(new_keyword)); // dont use this use new more than this
  // these both are same but only diffrence is that new is going to call the constructor

  // when you use new you must use delte must
  delete[] objs; // if you allocate new with sq brackets also call delte with sq brackets
  delete obj; // delete also calls the deconstructor
  free(objm);
  new_keyword hehe;
  auto memory_address = &hehe;
  new_keyword* specific = new(memory_address) new_keyword();



  return 0;
}