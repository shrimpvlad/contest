#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	long long x;
	vector<long long> vec;
	string line;
	ifstream file("input.txt");
	getline(file,line);
	istringstream ss(line);
	while (ss>>x)
    	vec.push_back(x);
	long long max1 = max({vec[0],vec[1],vec[2]});
    long long max3 = min({vec[0],vec[1],vec[2]});
	long long max2 = vec[0] + vec[1] + vec[2] - max1 - max3;
	long long min1 = max3;
	long long min2 = max2;
	for (int i = 3; i<vec.size(); ++i)
    {
    	if (vec[i]>max1)
        {
        	max3=max2;
        	max2=max1;
        	max1=vec[i];
        }
    	else if (vec[i]>max2)
        {
        	max3=max2;
        	max2=vec[i];
        }
    	else if (vec[i]>max3)
        {
        	max3=vec[i];
        }
    	if (vec[i]<min1)
        {
        	min2=min1;
        	min1=vec[i];
        }
    	else if (vec[i]<min2)
        	min2=vec[i];
    }
	(max1*max2*max3 > min1*min2*max1) ? cout<<max3<<" "<<max2<<" "<<max1<<endl : cout<<max1<<" "<<min1<<" "<<min2<<endl;
}
