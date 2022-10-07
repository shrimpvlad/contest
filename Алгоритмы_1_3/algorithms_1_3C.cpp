#include <set>
#include <iostream>

using namespace std;

int main()
{
    int n,m,x;
    cin>>n>>m;
    set<int> boris, anna, both;
    for (int i = 0; i < n; ++i)
    {
        cin>>x;
        boris.insert(x);
    }
    for (int i = 0; i < m; ++i)
    {
        cin>>x;
        if (boris.count(x) > 0)
            both.insert(x);
        else
            anna.insert(x);
    }
    for (const auto &b: both)
    {
        boris.erase(b);
    }
    cout<<both.size()<<endl;
    for (const auto &b: both)
        cout<<b<<" ";
    cout<<endl;
    cout<<boris.size()<<endl;
    for (const auto &b: boris)
        cout<<b<<" ";
    cout<<endl;
    cout<<anna.size()<<endl;
    for (const auto &a: anna)
        cout<<a<<" ";
    cout<<endl;
    
}