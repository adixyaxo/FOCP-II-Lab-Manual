#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // ways to create a vector
    vector<int> vec1;        // zero length vector
    vector<char> vec2(4);    // 4 element character vector
    vector<char> vec3(vec2); // 4 element character vector derived out of vec 2

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