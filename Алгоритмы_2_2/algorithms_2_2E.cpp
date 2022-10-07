#include <iostream>

using namespace std;

int main() {
	int n,a, max =0,sum=0;
	cin>>n;
	for (int i=0;i<n;++i) {
		cin>>a;
    	if (max<a) max=a;
    	sum+=a;
	}
	cout<<(sum-max)<<endl;
}
