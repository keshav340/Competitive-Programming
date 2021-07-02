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
    v1.pop_back(); //remove last element
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << v1.front() << endl; //reference to first elememnt
    cout << v.front() << endl;  
    cout << v1.back() << endl; //reference to last elememnt
    cout << v.back() << endl;
    auto it = v.insert(v.begin(), 100);
    v.insert(v.begin() + 2, 200);
    v.insert(v.begin(), 3, 300);//Insertion of 
    vector<int> v3;
    v3.insert(v3.begin(), v.begin(), v.end()); //insetion of element
    v3.erase(v3.begin());
    v1.erase(v1.begin(), v1.end() - 1);
    cout << v.size();
    cout << v.capacity();
    v3.clear();
    if (v.empty() == false)
    {
        cout << "non empty";
    }
    else
    {
        cout << "empty";
    }
    v.resize(4);
    for (auto x : v)
    {
        cout << x << " ";
    }
    v.resize(10);
    for (auto x : v)
    {
        cout << x << " ";
    }
    v.resize(20, 100);
    for (auto x : v)
    {
        cout << x << " ";
    }
}
