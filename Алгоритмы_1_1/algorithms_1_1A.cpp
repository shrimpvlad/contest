#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	string cond;
	cin>>cond;
	if (cond == "freeze")
    {
    	(a>=b) ? cout<<b<<endl : cout<<a<<endl;
    }
	else if (cond == "heat")
    {
    	(a>=b) ? cout<<a<<endl : cout<<b<<endl;
    }
	else if (cond == "auto")
    {
    	cout<<b<<endl;
    }
	else
    	cout<<a<<endl;
}
