#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> vec1;
    int element;
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter an element to add to this vector :: ";
        cin >> element;
        vec1.push_back(element);
    }
    display(vec1);
    vec1.pop_back(); // removes the element at the end of the vector ie 4

    // interator
    vector<int>::iterator iter = vec1.begin();

    vec1.insert(iter, 50, 566);

    // vec1.insert(iter + 1 + vec1.size(), 100);
    display(vec1);
    cout << vec1.at(vec1.size() - 1);
    return 0;
}