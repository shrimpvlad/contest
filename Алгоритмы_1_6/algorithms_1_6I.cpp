#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool Condition (const vector<long long> &vec, long long &m, long long &p, long long &c)
{
    long long sum = 0;
    int i = 0;
	while (i<vec.size()-c+1)
    {
    	if (vec[i+c-1] - vec[i] <= m)
        {
        	i+=c;
        	sum++;
        }
    	else
        	i++;
    }
    return sum>=p;
}

int main()
{
    long long n,p,c, x;
    cin>>n>>p>>c;
    vector<long long> vec(n);
    for (int i = 0; i < n; ++i)
    {
        cin>>x;
        vec[i]=x;
    }
    sort(vec.begin(), vec.end());
    long long l = 0;
    long long r = vec[n-1] - vec[0];
    long long mid = 0;
    while (l<r)
    {
        mid = (l+r)/2;
        if (Condition(vec, mid, p, c))
            r = mid;
        else
            l = mid+1;
    }
    cout<<l<<endl;
}

