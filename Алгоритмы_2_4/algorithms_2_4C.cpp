#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <set>
#include <utility>
#include <algorithm>

using namespace std;

int main() {
    string line, word;
    map<string, int> m;
    ifstream inFile("input.txt");
    if(inFile)
    {
        while (getline(inFile, line)) {
            istringstream ss(line);
            while(ss >> word)
            {
                m[word]++;
            }
        }
    }
    vector<pair<int,string>> st;
    for (auto &[first,second]: m) {
        st.push_back(make_pair(second,first));
    }
    sort(st.begin(), st.end(), [](pair<int, string> p1, pair<int, string> p2) {
        if (p1.first == p2.first) return (p1.second<p2.second);
        else return (p1.first > p2.first);});
    
    
    for (auto it=st.begin();it!=st.end();++it) {
        cout<<(*it).second<<endl;
    }
    
}
