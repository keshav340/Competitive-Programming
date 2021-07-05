#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(15);
    pq.push(5);
    cout << pq.size() << endl;
    cout << pq.top() << endl;
    while (pq.empty() == false)
    {
        cout << pq.top() << endl;
        pq.pop();
    }
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(10);
    pq1.push(15);
    pq1.push(5);
    cout << pq1.size() << endl;
    cout << pq1.top() << endl;
    while (pq.empty() == false)
    {
        cout << pq1.top() << endl;
        pq1.pop();
    }
    // We can use existing array to create priority queue. and it is good approach
    int arr[]{10, 20, 30};
    priority_queue<int> p(arr, arr + n);
    while (p.empty() == false)
    {
        cout << p.top() << endl;
        p.pop();
    }
}