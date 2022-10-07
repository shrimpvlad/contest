#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool Compare_cs (const int &cs1, const int &cs2)
{
    return cs1>cs2;
}

int Max_position (vector<int> &cs, int res)
{
    
    for (int i = 0; i<cs.size(); ++i)
    {
        if (cs[i] == res)
            return (i+1);
    }
    return 0;
}

int main()
{
    int n,x, max = 0;
    cin>>n;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i)
    {
        cin>>x;
        vec[i]=x;
        if (x>max)
            max = x;
    }
    bool flag = false;
    vector<int> sort_cs = vec;
    sort(sort_cs.begin(), sort_cs.end(), Compare_cs);
//    int max_pos = 0;
    int max_val = 0;
    for (int i = 0; i < n-1; ++i)
    {
        
        if ((vec[i] % 5 == 0) && (vec[i] % 10 != 0) && (flag) && (vec[i+1]<vec[i]))
        {
            if (max_val < vec[i])
                max_val = vec[i];
                
        }
        if (vec[i] == max)
        {
            flag = true;
        }
    }
    cout<<Max_position(sort_cs, max_val)<<endl;
}

