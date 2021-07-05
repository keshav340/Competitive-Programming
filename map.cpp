#include <iostream>
#include <map>
using namespace std;
int main(int argc, char **argv)
{
    map<int, int> m;
    m.insert({10, 50});
    m[5] = 100;
    m.insert({3, 300});
    for (auto &x : m)
    {
        cout << x.first << " " << x.second << endl;
    }
    cout << m[20] << endl;
    cout << m.size() << endl;
    // m.at[10] = 300;
    //m.clear();
    if (m.find(10) == m.end())
    {
        cout << "not found";
    }
    else
    {
        cout << "found";
    }
    if (m.count(2) == 0)
    {
        cout << "not found";
    }
    else
    {
        cout << "found";
    }
    auto it = m.lower_bound(10);
    if (it != m.end())
    {
        cout << (*it).first;
    }
    else
    {
        cout << "No equal or greater value";
    }
    auto it = m.upper_bound(5);
    if (it != m.end())
    {
        cout << (*it).first;
    }
    else
    {
        cout << "No  greater value";
    }
    m.erase(5);
    m.erase(m.find(10), m.end());
    cout << m.size();
}