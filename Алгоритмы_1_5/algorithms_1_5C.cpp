#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n,m,x,y,prev = 0;
    long long y_up,y_down;
    cin>>n;
    map<int,pair<long long,long long>> rocks;
    for (int i = 0; i < n; ++i)
    {
        cin>>x>>y;
        if (i==0)
        {
            y_up = 0;
            y_down = 0;
        }
        else
        {
            (y>=prev) ? y_up+=(y-prev) : y_down+=(prev-y);
        }
        rocks[i+1] = {y_up, y_down};
        prev = y;
    }
//    for (auto &[f,s]: rocks)
//        cout<<s.first<<" "<<s.second<<endl;
    cin>>m;
    for (int i = 0; i < m; ++i)
    {
        cin>>x>>y;
        if (x<y)
        {
            cout<<rocks[y].first - rocks[x].first<<endl;
        }
        else if (x==y)
            cout<<0<<endl;
        else
            cout<<rocks[x].second - rocks[y].second<<endl;
    }
}
