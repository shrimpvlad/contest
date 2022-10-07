#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, x, y;
    cin>>n>>m;
    vector<pair<int,int>> vec(2*m);
    for (int i = 0; i < m; ++i)
    {
        cin>>x>>y;
        vec[2*i]={x,-1};
        vec[2*i + 1]={y,1};
    }
    sort(vec.begin(), vec.end());
    int cheat = 0;
    int start = 0, count = 0;
    for (int i = 0; i < 2*m; ++i)
    {
        if (count == 0)
            start = vec[i].first;
        if (vec[i].second == -1)
            count++;
        else
            count--;
        if (count == 0)
            cheat += vec[i].first - start + 1;
    }
    cout<<(n - cheat)<<endl;
}

