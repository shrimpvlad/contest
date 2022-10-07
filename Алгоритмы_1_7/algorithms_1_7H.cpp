#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int k,n,a,b;
    cin>>k;
    while (k>0)
    {
        cin>>n;
        vector<pair<int,int>> vec(n);
        for (int i = 0; i < n; ++i)
        {
            cin>>a>>b;
            vec[i] = {a,b};
        }
        sort(vec.begin(), vec.end());
        int l = vec[0].first;
        int r = vec[0].second;
        if (l != 0 || vec[n-1].second != 10000)
        {
            cout<<"Wrong Answer"<<endl;
        	--k;
            continue;
        }
        bool flag = true;
        for (int i = 1; i < n; ++i)
        {
            if (vec[i].first > r || vec[i].second <= r || (vec[i].first <= l && vec[i].second >= r))
            {
                flag = false;
                break;
            }
            l = r;
            r = vec[i].second;
        }
        (flag) ? cout<<"Accepted"<<endl : cout<<"Wrong Answer"<<endl;
        --k;
    }
}

