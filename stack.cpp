#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.top() << endl;
    cout << s.size() << endl;
    while (s.empty() == false)
    {
        cout << s.top() << endl;
        s.pop();
    }
}