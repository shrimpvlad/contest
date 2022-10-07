#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int o1 = max(a,c) * (b+d);
	int o2 = max(a,d) * (b+c);
	int o3 = max(b,c) * (a+d);
	int o4 = max(b,d) * (a+c);
	int sq = min({o1,o2,o3,o4});
	if (sq == o1)
    	cout<<max(a,c)<<" "<<(b+d)<<endl;
	else if (sq == o2)
    	cout<<max(a,d)<<" "<<(b+c)<<endl;
    else if (sq == o3)
    	cout<<max(b,c)<<" "<<(a+d)<<endl;
    else 
    	cout<<max(b,d)<<" "<<(a+c)<<endl;
}
