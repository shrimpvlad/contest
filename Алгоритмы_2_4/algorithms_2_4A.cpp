#include <map>
#include <iostream>

using namespace std;

int main() {
	map<long long, long long> box;
	int n;
	long long a,b;
	cin>>n;
	for (int i=0;i<n;++i) {
		cin>>a>>b;
    	box[a]+=b;
    }
	for (auto [first, second] : box)
	{
    	cout << first << " " << second << "\n";
	}
}
