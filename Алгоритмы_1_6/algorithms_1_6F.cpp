#include <iostream>

using namespace std;

int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    int l = 0;
    int r = n * max(x,y);
    if (n == 1)
    {
        cout<<min(x,y)<<endl;
        return 0;
    }
    int tmp = min(x,y);
    --n;
	int mid;
    while (l<r)
    {
        mid = (l+r)/2;
        if (mid / x + mid / y >= n)
            r = mid;
        else
            l = mid+1;
    }
    cout<<l+tmp<<endl;
}
