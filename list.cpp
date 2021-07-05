#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_front(20);
    l1.push_front(30);
    for (auto x : l1)
    {
        cout << x << " ";
    }
    l1.pop_front();
    l1.pop_back();
    auto it = l1.begin();
    it++;
    it = l1.insert(it, 25);
    l1.insert(it, 2, 7);
    cout << l1.front() << " " << l1.back() << endl;
    it = l1.erase(it);
    l1.remove(30);
    list<int> l2 = {20, 52, 360};
    l2.merge(l1);
    l2.reverse();
    l2.unique();
    l2.sort();
    l2.clear();
    cout << l1.size();
    l2.emplace_front(10);
    l2.emplace_back(20);
    if (l2.empty() == false)
    {
        cout << l2.size();
    }
    else
    {
        cout << "not found" << endl;
    }
}