#include <iostream>
#include <string>

using namespace std;

int main() {
	string pol;
	int count=0;
	cin>>pol;
	int size = pol.size();
	
	for (int i = size/2 - 1; i >= 0; --i) {
		if (pol[i] != pol[size-i-1]) count++; 
    }
	cout<<count<<endl;
}
