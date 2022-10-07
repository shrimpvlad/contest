#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    long long x;
    string line;
    ifstream file("input.txt");
    getline(file,line);
    istringstream ss(line);
    vector<long long> vec;
    while (ss>>x)
        vec.push_back(x);
    long long max1 = max(vec[0],vec[1]);
    long long max2 = min(vec[0],vec[1]);
    long long min1 = max2;
    long long min2 = max1;
    for (int i = 2; i<vec.size();++i)
    {
        if (vec[i] > max1)
        {
            max2 = max1;
            max1 = vec[i];
        }
        else if (vec[i] > max2)
            max2 = vec[i];
        if (vec[i] < min1)
        {
            min2 = min1;
            min1 = vec[i];
        }
        else if (vec[i] < min2)
            min2 = vec[i];
    }
	long long prod_max = max1*max2;
	long long prod_min = min1*min2;
    (prod_max > prod_min) ? cout<<max2<<" "<<max1<<endl : cout<<min1<<" "<<min2<<endl;
}

