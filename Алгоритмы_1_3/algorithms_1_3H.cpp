#include <iostream>
#include <set>

using namespace std;

int main()
{
	int n;
	cin>>n;
	double x,y;
	set<double> shoots;
	for (int i = 0; i < n; ++i)
    {
    	cin>>x>>y;
    	shoots.insert(x);
    }
	cout<<shoots.size()<<endl;
}
