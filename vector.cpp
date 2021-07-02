#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(5);
    v.push_back(20);
    v.push_back(30);
    v.push_back(55);
    //ways of traversing in vector
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    for (int &x : v)
    {
        cout << x << " ";
    }
    int n = 4, x = 10;
    vector<int> v1(n, x);
    for (auto i = v1.begin(); i != v1.end(); i++)
    {
        cout << *i << " ";
    }
    //rbegin(),rend(),cbegin(),cend()
}
