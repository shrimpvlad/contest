#include <set>
#include <iostream>

using namespace std;

int main()
{
    int n,a,b;
    cin>>n;
    set<pair<int,int>> turtles;
    for (int i = 0; i < n; ++i)
    {
        cin>>a>>b;
        if (a+b == n-1 && a>=0 && b>=0)
            turtles.insert({a,b});
    }
//    for (auto turtle: turtles)
//        cout<<turtle.first<<" "<<turtle.second<<endl;
    cout<<turtles.size()<<endl;
}
