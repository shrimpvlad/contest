#include <iostream>

using namespace std;

int main()
{
    long long n,m,t;
    cin>>n>>m>>t;
    long long l = 0, mid=0;
    long long r = min(n,m)/2;
	long long sq = n*m;

    while (l<r)
    {
        mid = (l+r+1)/2;
        if (sq - (n - 2*mid)*(m - 2*mid) <= t)
            l = mid;
        else
            r = mid-1;
    }
    cout<<l<<endl;
}

