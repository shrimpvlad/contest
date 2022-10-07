#include <iostream>
#include <map>

using namespace std;

int main()
{
	int n,k,c,p;
	map<int,int> buttons;
	cin>>n;
	for (int i = 1; i<= n; ++i)
    {
    	cin>>c;
    	buttons[i] = c;
    }
	cin>>k;
	for (int i = 0; i< k; ++i)
    {
    	cin>>p;
    	buttons[p]--;
    }
	for (const auto &[f,s]: buttons)
    {
    	(s>=0) ? cout<<"NO"<<endl : cout<<"YES"<<endl;
    }
}
