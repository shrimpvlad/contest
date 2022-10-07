#include <iostream>

using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if (c<0)
    {
    	cout<<"NO SOLUTION"<<endl;
    	return 0;
    }
	if (a==0)
    {
    	if (b<0)
    		cout<<"NO SOLUTION"<<endl;
    	else if (b == c*c)
        	cout<<"MANY SOLUTIONS"<<endl;
        else 
        	cout<<"NO SOLUTION"<<endl;
    	return 0;
    }
	((c*c-b)%a == 0) ? cout<<((c*c-b)/a)<<endl : cout<<"NO SOLUTION"<<endl;
}
