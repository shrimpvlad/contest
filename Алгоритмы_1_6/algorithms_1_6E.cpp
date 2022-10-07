#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

long long GPA(long long a, long long b, long long c, long long d)
{
    long long gpa = (a*2 + b*3 +c*4 + d*5)/(a + b +c + d);
    long long ost = (a*2 + b*3 +c*4 + d*5) - gpa*(a + b + c + d);
    if (ost*2 >= (a + b + c + d))
        return (gpa+1);
    else
        return gpa;
}

long long LBS(long long l, long long r, long long a, long long b, long long c)
{
    long long mid;
    while (l<r)
    {
        mid = (l+r)/2;
        if (GPA(a,b,c,mid) >= 4)
            r = mid;
        else
            l = mid+1;
    }
    return l;
}
int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    long long r = 2*max({a,b,c});
    cout<<LBS(0,r,a,b,c)<<endl;
}

