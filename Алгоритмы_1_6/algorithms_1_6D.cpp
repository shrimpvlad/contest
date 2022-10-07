#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long LBinSearch(long long l, long long r, long long w, long long h, long long n, long long a, long long b)
{
    long long mid;
    while (l<r)
    {
        mid = (l + r + 1) / 2;
        if (( w / (a + 2 * mid) ) * ( h / (b + 2 * mid) )  >= n)
            l = mid;
        else
            r = mid-1;
    }
    return l;
}

int main()
{
    long long n,a,b,w,h;
    cin>>n>>a>>b>>w>>h;
    long long r = max(w,h);
    cout<<max(LBinSearch(0, r, w, h, n, a, b), LBinSearch(0, r, w, h, n, b, a))<<endl;
}

