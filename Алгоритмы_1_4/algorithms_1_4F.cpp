#include <map>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string name, line, product;
    size_t count;
    map<string, map<string, size_t>> data;
    ifstream file("input.txt");
    while (getline(file,line))
    {
        istringstream ss(line);
        while (ss>>name>>product>>count)
        {
            data[name][product]+=count;
        }
    }
    for (auto &[f1,s1]: data)
    {
        cout<<f1<<":"<<endl;
        for (auto &[f2,s2]: s1)
            cout<<f2<<" "<<s2<<endl;
    }
}
