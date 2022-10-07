#include <vector>
#include <algorithm>
#include <sstream>
#include <fstream>
#include <string>
#include <list>
#include <iostream>

using namespace std;

int main() {
    vector<int> v;
    string line;
    int number;
    bool flag = true;
    ifstream file("input.txt");
    getline(file,line);
    istringstream ss(line);
    while (ss>>number) {
        v.push_back(number);
    }
    for (int i = 0; i<v.size(); ++i) {
        for (int j=0;j<v.size();++j) {
            if (v[i]==v[j] && i!=j) {
                flag = false;
                break;
            }
        }
        if (flag) cout<<v[i]<<" ";
        flag = true;
    }
    cout<<endl;
}
