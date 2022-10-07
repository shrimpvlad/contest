#include <set>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	string line;
	int x;
	set<int> set_out;
	ifstream file("input.txt");
	getline(file,line);
	istringstream ss(line);
	while (ss>>x)
    {
    	set_out.insert(x);
    }
	cout<<set_out.size()<<endl;
}