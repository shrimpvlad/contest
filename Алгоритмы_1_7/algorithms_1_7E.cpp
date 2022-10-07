#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, start_m, start_h, end_m, end_h;
    cin>>n;
    vector<array<int, 3>> vec;
    for (int i = 0; i<n; ++i)
    {
        cin>>start_h>>start_m>>end_h>>end_m;
        if (start_h > end_h || (start_h == end_h && start_m >= end_m))
        {
            vec.push_back({start_h, start_m, -1});
            vec.push_back({24, 0, 1});
            vec.push_back({0,0, -1});
            vec.push_back({end_h, end_m, 1});
        }
        else
        {
            vec.push_back({start_h, start_m, -1});
            vec.push_back({end_h, end_m, 1});
        }
    }
    
    sort(vec.begin(), vec.end());
    
    int tmp = 0, s1 = 0, s2 = 0, m = 0;
    for (int i = 0; i < vec.size(); ++i)
    {
        if (vec[i][2] == -1)
        {
            tmp++;
            if (tmp == n)
            {
                s1 = vec[i][0];
                s2 = vec[i][1];
            }
        }
        else
        {
            if (tmp == n)
            {
                m += (vec[i][0] - s1) * 60 + (vec[i][1] - s2);
            }
            tmp--;
        }
    }
//    for (auto v: vec)
//        cout<<v[0]<<"\t"<<v[1]<<"\t"<<v[2]<<endl;
    cout<<m<<endl;
    
}

