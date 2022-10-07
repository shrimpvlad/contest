#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,a;
    cin>>n;
    vector<long long> vec(n);
	long long sum =0;
    for (int i=0; i<n; ++i)
    {
        cin>>a;
        vec[i] = a;
    	sum+=a;
    }

    long long max = 0;
	for (int i=0;i<n;++i)
    {
    	max+=vec[i];
    	if (max>sum)
        	sum = max;
    	if (max<0)
        	max = 0;
    }
    cout<<sum<<endl;
}
