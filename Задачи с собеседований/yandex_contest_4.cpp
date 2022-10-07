#include <vector>
#include <iostream>
#include <array>
#include <algorithm>
#include <set>
using namespace std;

size_t LBS(const vector<pair<int, size_t>> &vec, int p1, int p2)
{
    auto it1 = lower_bound(vec.begin(), vec.end(), make_pair(p1, numeric_limits<size_t>::min()));
    if (it1 == vec.end())
        return 0;
    auto it2 = lower_bound(vec.begin(), vec.end(), make_pair(p2, numeric_limits<size_t>::max()));
    it1--;
    it2--;
    return (*it2).second - (*it1).second;
    
}

int main()
{
    int n,q,start,end,type;
    size_t price;
    
    cin>>n;
    vector<pair<int,size_t>> vec1(n+1), vec2(n+1);
    vec1[0] = {0,0};
    vec2[0] = {0,0};
    for (int i = 1; i <= n; ++i)
    {
        cin>>start>>end>>price;
        vec1[i] = {start,price};
        vec2[i] = {end,end-start};
    }

    sort(vec1.begin(),vec1.end());
    sort(vec2.begin(),vec2.end());

    for (int i = 1; i < vec1.size(); ++i)
    {
        vec1[i].second = vec1[i].second + vec1[i-1].second;
    }

    for (int i = 1; i < vec2.size(); ++i)
    {
        vec2[i].second = vec2[i].second + vec2[i-1].second;
    }

    cin>>q;
    vector<size_t> v(q);

    for (int i = 0; i < q; ++i)
    {
        cin>>start>>end>>type;
        if (type == 1)
        {
            cout<<LBS(vec1, start, end)<<" ";
        }
        else
        {
            cout<<LBS(vec2, start, end)<<" ";
        }

    }
//    for (auto &c:v)
//        cout<<c<<" ";
    cout<<endl;
}
