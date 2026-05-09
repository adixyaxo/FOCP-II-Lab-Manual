#include <iostream>
#include <queue>
#include <vector>
#include <functional>

using namespace std;

int main() {
  priority_queue<int> pq;

  for (int x : {10, 20, 5, 15})
      pq.push(x);

  pq.push(340);

  for (int i = pq.size();  i > 1; i--)
  {
    cout << pq.top()<<endl;
    pq.pop();
  }



  return 0;
}