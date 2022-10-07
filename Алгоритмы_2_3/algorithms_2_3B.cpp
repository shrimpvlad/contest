#include <fstream>
#include <string>
#include <set>
#include <iostream>
#include <sstream>

using namespace std;

int main() {
	set<int> s;
	string line;
	int number, size = 0;
	ifstream file("input.txt");
	if (file) {
		getline(file,line);
    	istringstream tmp(line);
    	while (tmp>>number) {
    		s.insert(number);
        	(size<s.size()) ? cout<<"NO"<<endl : cout<<"YES"<<endl;
        	size = s.size();
        }
    }
}
