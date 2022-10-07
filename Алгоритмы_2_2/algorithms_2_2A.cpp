#include <iostream>

using namespace std;

int main() {
	int max = 0, x, count = 0;
	while(cin>>x && x!= 0) {
    	if (x>max) {
        	max = x;
        	count = 1;
        }
    	else if (x == max) count++;
    }
	cout<<count<<endl;
}
