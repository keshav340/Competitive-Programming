#include <utility>
#include <iostream>
using namespace std;
int main()
{
    pair<int, int> p(10, 20), p1(50, 60);
    pair<int, string> p2(10, "keshav");
    cout << p2.first << " " << p2.second << endl;
    cout << p.first << " " << p.second << endl;
    cout << (p == p1) << endl;
    cout << (p != p1) << endl;
    cout << (p > p1) << endl;
    cout << (p < p1) << endl;
}