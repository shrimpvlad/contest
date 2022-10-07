#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int m = max({a,b,c});
	if (a==0 || b== 0 || c==0)
    {
    	cout<<"NO"<<endl;
    	return 0;
    }
	(m<a+b+c-m) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
}
