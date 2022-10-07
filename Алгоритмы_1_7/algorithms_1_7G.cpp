#include <iostream>
#include <array>
#include <vector>
#include <set>
#include <tuple>
#include <algorithm>

using namespace std;

int FindMinPos(const vector<array<int,5>> &vec)
{
    int min = 0;
    for (int pos = 0; pos < vec.size(); ++pos)
    {
        if (vec[pos][3]<vec[min][3])
            min = pos;
    }
    return min;
}


int main()
{
    int n,m,tt;
    cin>>m>>n;
    int t,z,y;
    vector<array<int,5>> vec(n);
    for (int i = 0; i < n; ++i)
    {
        cin>>t>>z>>y;
        vec[i] = {t, z, y, t, 0};
    }
    int pos;
    int time = 0;
    while (m)
    {
        pos = FindMinPos(vec);

        time += vec[pos][3];
        tt = vec[pos][3];
        for (int i = 0; i<n; ++i)
        {            
            vec[i][3] -= tt;
            if (vec[i][3] == 0)
            {
                m--;
            	
                ++vec[i][4];
                if (vec[i][4] % vec[i][1] == 0)
                    vec[i][3] = vec[i][2] + vec[i][0];
                else
                    vec[i][3] = vec[i][0];
            	if (m==0)
                	break;
            }
        }
    }
    cout<<time<<endl;
    for (auto v: vec)
        cout<<v[4]<<" ";
    cout<<endl;
}

