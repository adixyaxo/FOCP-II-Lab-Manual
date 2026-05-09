#include <iostream>

using namespace std;

/*
This is before using template

class vector{

  int size;
  public:
  int* arr;

  vector(int s){
    size = s;
  arr = new int[s];
  }

  int dotproduct(vector &v){
    int t = 0;
    for (int i = 0; i < size; i++)
    {
      t+= this->arr[i] * v.arr[i];
    }
    return t;
  }
};
*/

template <class T>
class vector{

  int size;
  public:
  T* arr;

  vector(int s){
    size = s;
  arr = new T[s];
  }

  T dotproduct(vector &v){
    T t = 0;
    for (int i = 0; i < size; i++)
    {
      t+= this->arr[i] * v.arr[i];
    }
    return t;
  }
};




int main() {
  vector<int> v1(4);
  v1.arr[0] = 1;
  v1.arr[1] = 2;
  v1.arr[2] = 3;
  v1.arr[3] = 4;

  vector<int> v2(3);
  v2.arr[0] = 1;
  v2.arr[1] = 2;
  v2.arr[2] = 3;
  v2.arr[3] = 3;
  cout << v1.dotproduct(v2) << endl;

  vector<float> f1(4);
  f1.arr[0] = 1.2;
  f1.arr[1] = 2.2;
  f1.arr[2] = 3.4;
  f1.arr[3] = 4.5;

  vector<float> f2(3);
  f2.arr[0] = 1.0;
  f2.arr[1] = 1.0;
  f2.arr[2] = 1.2;
  f2.arr[3] = 1.0;
  cout << f1.dotproduct(f2) << endl;


  return 0;
}