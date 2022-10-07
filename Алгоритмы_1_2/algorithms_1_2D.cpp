#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    float x;
    string line;
    vector<float> vec;
    ifstream file("input.txt");
    getline(file,line);
    istringstream ss(line);
    while (ss>>x)
        vec.push_back(x);
    if (vec.size() < 3)
    {
        cout<<0;
    }
    else
    {
        int count = 0;
        for (int i = 1; i<vec.size()-1; ++i)
        {
            if ((vec[i-1] < vec[i]) && (vec[i+1] < vec[i]))
                count++;
        }
        cout<<count;
    }
}
