#include <iostream>
#include <forward_list>
using namespace std;
int main(int argc, char)
{
    forward_list<int> l = {10, 15, 20};
    l.push_front(5);
    l.push_front(3);
    l.pop_front();
    for (int x : l)
    {
        cout << x << " ";
    }
    l.assign({20, 65, 78});
    l.remove(10);
    forward_list<int> l2;
    l2.assign(l.begin(), l.end());
    auto it = l2.insert_after(l2.begin(), 10);
    it = l2.insert_after(it, {2, 3, 5});
    it = l2.emplace_after(it, 45);
    it = l2.erase_after(it);
    for (int x : l2)
    {
        cout << x << " ";
    }
    it = l2.erase_after(it, l2.end());
    return 0;
}