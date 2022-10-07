#include <set>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string line;
    int x;
    set<int> set1, set2;
    ifstream file("input.txt");
    getline(file,line);
    istringstream ss1(line);
    while (ss1>>x)
    {
        set1.insert(x);
    }
    getline(file,line);
    istringstream ss2(line);
    while (ss2>>x)
    {
        if (set1.count(x)>0)
        	set2.insert(x);
    }
    for (auto s:set2)
        cout<<s<<" ";
}