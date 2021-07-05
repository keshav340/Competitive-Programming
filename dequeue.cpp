#include <iostream>
#include <deque>
using namespace std;
int main(int argc, char)
{
    deque<int> dq = {10, 15, 30};
    dq.push_front(5);
    dq.push_back(10);
    for (auto x : dq)
    {
        cout << x << " ";
    }
    cout << dq.front() << " " << dq.back() << endl;
    auto it = dq.begin();
    it++;
    dq.insert(it, 20);
    dq.pop_front();
    dq.pop_back();
    cout << dq.size() << endl;
}
