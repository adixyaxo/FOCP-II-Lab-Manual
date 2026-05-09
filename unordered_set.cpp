#include <iostream>
#include <unordered_set>

using namespace std;

int main() {

  std :: unordered_set<int> us{10,22,32,134,31,312};
  // Stores unique elements. Not accessible by index.
  us.insert(10);
  us.insert(22);
  us.insert(321321);
  unordered_set<int> :: iterator itr;
  for (itr= us.begin(); itr != us.end(); itr++)
  {

  }


  return 0;
}