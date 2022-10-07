#include <iostream>

using namespace std;

int main()
{
	int a,b,c,d,e;
	cin>>a>>b>>c>>d>>e;
	if ((a<=d && b<=e) || (a<=d && c<=e) || (c<=d && d<=e) || (b<=d && a<=e) || (c<=d && a<=e) || (b<=d && c<=e))
    	cout<<"YES"<<endl;
	else 
    	cout<<"NO"<<endl;
}
