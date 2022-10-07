#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    int n,q,p,a,b;
    long long sum=0;
//    long long sum_all=0;
    cin>>n>>q;
    vector<long long> vec(n);
    for (int i=0;i<n;++i)
    {
        cin>>p;
        sum += p;
        vec[i] = sum;
        
    }
    for (int i=0; i<q; ++i)
    {
        cin>>a>>b;
        long long tmp1 = 0, tmp2 = 0;
        if (a>1)
            tmp1 = vec[a-2];
//        else tmp1 = vec[a-1];
        tmp2 = vec[b-1];

        cout<<(tmp2 - tmp1)<<endl;
        
    }
}
