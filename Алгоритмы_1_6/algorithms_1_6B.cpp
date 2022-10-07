#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long Lbinsearch(int l, int r, vector<long long> &vec, long long x)
{
    int mid;
    while (l<r)
    {
        mid = (l+r)/2;
        if (vec[mid]>=x)
            r = mid;
        else
            l = mid+1;
    }
    return vec[l];
}

long long Rbinsearch(int l, int r, vector<long long> &vec, long long x)
{
    int mid;
    while (l<r)
    {
        mid = (l+r+1)/2;
        if (vec[mid]<=x)
            l = mid;
        else
            r = mid-1;
    }
    return vec[l];
}

int main()
{
    int n,m;
    long long x;
    cin>>n>>m;
    vector<long long> vec(n);
    for (int i = 0; i < n; ++i)
    {
        cin>>x;
        vec[i] = x;
    }
    for (int i = 0; i < m; ++i)
    {
        cin>>x;
        long long a,b;
        a = Lbinsearch(0, n-1, vec, x);
        b = Rbinsearch(0, n-1, vec, x);
//        cout<<a<<"\t"<<b<<endl;
        if (a==b)
            cout<<a<<endl;
        else if (abs(a-x) == abs(b-x))
            cout<<min(a,b)<<endl;
        else if (abs(a-x) < abs(b-x))
            cout<<a<<endl;
        else
            cout<<b<<endl;
    }
}
