#include <iostream>
#include <vector>

using namespace std;

bool Bin_search(vector<long long> &vec, int a, int b, long long x)
{
    int mid;
    while (a<b)
    {
        mid=(b+a)/2;
        if (x<vec[mid])
            b = mid;
        else if (x>vec[mid])
            a = mid+1;
        else
            return true;
    }
    if (vec[a]==x)
        return true;
    return false;
}
int main()
{
    long long x;
    int n,m;
    cin>>n>>m;
    vector<long long> vec(n);
    for (int i = 0; i<n; ++i)
    {
        cin>>x;
        vec[i] = x;
    }
    int left = 0;
    int right = n-1;
    for (int i = 0; i<m; ++i)
    {
        cin>>x;
        (Bin_search(vec,left,right,x)) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
}

