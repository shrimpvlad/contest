#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
#include <set>
#include <string>

using namespace std;

int main() {
    int number,count=0;
    set<int> s1;
    string line;
    ifstream inFile("input.txt");
    if(inFile)
    {
        getline(inFile, line);
        istringstream ss(line);
        while(ss >> number)
        {
            s1.insert(number);
        }
        getline(inFile, line);
        istringstream ss2(line);
        while(ss2 >> number)
        {
            if (s1.find(number)!=s1.end()) count++;
        }
    }
    cout<<count<<endl;
}
