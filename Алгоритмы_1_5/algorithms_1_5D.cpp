#include <vector>
#include <iostream>

using namespace std;

int main()
{
	long long n,k,x;
	cin>>n>>k;
	vector<long long> vec(n);
	for (int i = 0; i < n; ++i)
    {
    	cin>>x;
    	vec[i]=x;
    }
	long long right = 0, count = 0;
	for (int i = 0; i < n; ++i)
    {
    	while (right<n && vec[right]-vec[i]<=k)
        	right++;
    	count+=n-right;
    }
	cout<<count<<endl;
	
}
