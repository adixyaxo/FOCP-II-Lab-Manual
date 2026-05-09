#include<functional>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  // Function object (functor) is a function wrapper in class so that is it is available like an object

  int arr[] = {2,3,52,21,41,32,3,24,4}; // first 5 elements would get sorted

  sort(arr,arr+5);
  for (int i = 0; i<9; i++)
  {
    cout << arr[i] <<endl;
  }


  return 0;
}