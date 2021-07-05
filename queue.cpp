#include <iostream>
#include <queue>
using namespace std;
int main(int argc, char *argv[])
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout << q.front() << " " << q.back() << endl;
    q.pop();
    while (q.empty() == false)
    {
        cout << q.front() << endl;
        q.pop();
    }
    cout << q.size();
}