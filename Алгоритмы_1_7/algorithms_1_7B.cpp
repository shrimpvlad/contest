#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
    long long n,m,x,y;
    cin>>n>>m;
    vector<pair<long long, int>> vec(2*n + m);
    for (auto i = 0; i < n; ++i)
    {
        cin>>x>>y;
        vec[2*i] = {min(x,y),-1};
        vec[2*i+1] = {max(x,y),1};
    }
    vector<long long> ans(m);
    for (auto i = 0; i < m; ++i)
    {
        cin>>x;
        vec[2*n+ i] = {x,0};
        ans[i]=x;
    }
    sort(vec.begin(), vec.end());
    long long count = 0;
    unordered_map<long long, long long> map1;
    for (const auto &v:vec)
        {
            if (v.second == -1)
            {
                count++;
            }
            else if (v.second == 1)
                count--;
            else
                map1[v.first] = count;
        }
    for (const auto &a:ans)
        cout<<map1[a]<<" ";
}

