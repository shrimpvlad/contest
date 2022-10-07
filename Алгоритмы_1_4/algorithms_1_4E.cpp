#include <iostream>
#include <map>

using namespace std;

int main()
{
	long long n,w,h;
	cin>>n;
	map<long long, long long> blocks;
	for (int i = 0; i < n; ++i)
    {
    	cin>>w>>h;
    	if (blocks[w]<h)
        	blocks[w]=h;
    }
	long long sum = 0;
	for (const auto &[f,s]: blocks)
    	sum+=s;
	cout<<sum<<endl;
}
