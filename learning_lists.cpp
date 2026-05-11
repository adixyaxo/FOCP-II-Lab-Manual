#include <iostream>
#include <list>
using namespace std;

void display(list<int> &L){

  for (auto iter = L.begin(); iter != L.end(); iter++)
  {
    cout<<*iter<< " ";
  }
  cout<< endl;

}
int main() {
  list<int> l1;// this will create a list of zero length
  list<int> l2(7); // empty list of size seven , here we have allocated memory for seven integers

  l1.push_back(7);
  l1.push_back(32);
  l1.push_back(2);
  l1.push_back(2);
  l1.push_back(11);
  l1.push_back(8);

  // auto itr = l1.begin(); or  list<int> :: iterator itr;  are same

  display(l1);
  l1.pop_back();
  display(l1);
  l1.pop_front();
  display(l1);
  l1.remove(2); // it is going to remove all the occureneces of 2
  display(l1);
  l1.remove(32);
  display(l1);


  list<int> :: iterator itr;
  itr = l2.begin();
  *itr = 1;
  itr++;
  *itr = 2;
  itr++;
  *itr = 3;
  itr++;
  *itr = 4;
  itr++;
  *itr = 5;
  itr++;
  *itr = 6;
  itr++;
  *itr = 7;


  display(l2);
  l2.reverse();
  display(l2);
  l2.sort();
  display(l2);

  l1.merge(l2);
  cout << "l1 :: ";
  display(l1);
  cout << "l2 :: ";
  display(l2);


  return 0;
}