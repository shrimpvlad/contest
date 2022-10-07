#include <iostream>

using namespace std;

int main()
{
	int n,k,m,count=0;
	cin>>n>>k>>m;
	if (m>k)
    {
    	cout<<0<<endl;
    	return 0;
    }
	while (n>=k)
    {
    	int a = n/k;
    	int b = k/m;

    	count+=a*b;
    	n -=m*a*b;
    }
	cout<<count<<endl;
}
