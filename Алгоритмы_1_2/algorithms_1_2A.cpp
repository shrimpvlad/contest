#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <cmath>
#include <algorithm>


using namespace std;

int main()
{
    string line;
    long long a,last;
    vector<long long> vec;
    ifstream file("input.txt");
    getline(file,line);
 
    istringstream ss(line);
    while (ss>>a)
    {
        vec.push_back(a);
    }
	if (vec.size() < 2)
    {
    	cout<<"YES"<<endl;
    	return 0;
    }
	last = vec[0];
	
	for (int i = 1; i< vec.size(); ++i)
    {
    	a = vec[i];
    	if (a<=last)
        {
    		cout<<"NO"<<endl;
    		return 0;
    	}
    	last = a;
    }
    cout<<"YES"<<endl;
	return 0;
}
