#include <iostream>
#include <iostream>
#include <array>
#include <vector>
#include <set>
#include <tuple>
#include <algorithm>

using namespace std;

int main()
{
    int n,d1,m1,y1,d2,m2,y2, y18, y80;
    cin>>n;
    vector<array<int,5>> vec;
    for (int i = 0; i < n; ++i)
    {
        cin>>d1>>m1>>y1>>d2>>m2>>y2;
        y18 = y1 + 18;
        if ( tie(y18, m1, d1) <= tie(y2, m2, d2) )
            vec.push_back({y18, m1, d1, 1, i+1});
        else
            continue;
        y80 = y1 + 80;
        ( tie(y80, m1, d1) <= tie(y2, m2, d2) ) ? vec.push_back({y80, m1, d1, -1, i+1}): vec.push_back({y2, m2, d2, -1, i+1});
    }
    if (vec.size() == 0)
    {
        cout<<0<<endl;
        return 0;
    }
    sort(vec.begin(), vec.end());
    set<int> s;
    bool flag = false;
    for (int i = 0; i < vec.size(); ++i)
    {
        if (vec[i][3] == 1)
        {
            s.insert(vec[i][4]);
            flag = true;
        }
        else
        {
            if (flag)
            {
                for (const auto &people:s)
                    cout<<people<<" ";
                cout<<endl;
            }
            s.erase(vec[i][4]);
            flag = false;
        }
    }
}

