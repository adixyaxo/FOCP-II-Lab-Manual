#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
  map <string, int> student;
  student["Harry"] = 0;
  student["Jack"] = 2;
  student["Aditya"] = 100;

  // now we would go on to make an iterator
  cout <<"Hello"<<endl;

  map <string,int> :: iterator itr; // here map <string,int> is the std type and iterator is the datatype

  student.insert({{"Halwai wala",200},{"ganji chudail",100}});

  for (itr = student.begin(); itr != student.end(); itr++)
  {
    cout<<(*itr).first<< " :: "<< (*itr).second << endl;
    /* code */
  }

  cout<<student["Harry"];

  return 0;
}