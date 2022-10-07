#include <iostream>
#include <vector>
#include <cmath>

using namespace std;



long long LBinSearch (long long l, long long r, long long w, long long h, long long n)
{
    long long mid;
    while (l<r)
    {
        mid = (l+r)/2;
        if ((mid/w)*(mid/h)>=n)
            r=mid;
        else
            l=mid+1;
    }
    return l;
}

int main()
{
    long long w,h,n;
    cin>>w>>h>>n;
    long long l = 0;
    long long r_max = max(w,h)*n;
    long long r_min = min(w,h)*n;
    cout<<min(LBinSearch(l,r_min,w,h,n), LBinSearch(l,r_max,w,h,n))<<endl;
}

