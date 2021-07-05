// used to sorted elements
#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(5);
    for (int x : s)
    {
        cout << x << " ";
    }
    auto it = s.find(10); // s.count() it returns boolean value
    if (it != s.end())
    {
        cout << "not found" << endl;
    }
    else
    {
        cout << "found" << endl;
    }
    while (it != s.end())
    {
        cout << *it << endl;
    }
    s.clear();
    set<int> s1 = {10, 20, 30, 50};
    s1.insert(7);
    s1.erase(20);
    for (int x : s1)
    {
        cout << x << " ";
    }
    auto it = s1.find(7);
    s.erase(it);
    auto it = s1.lower_bound(10);
    if (it != s.end())
    {
        cout << *it << endl;
    }
    else
    {
        cout << "given element is greater than largest" << endl;
    }
    auto it2 = s1.upper_bound(30);
    if (it2 != s.end())
    {
        cout << *it2 << endl;
    }
    else
    {
        cout << "given element is greater than largest" << endl;
    }
    return 0;
}