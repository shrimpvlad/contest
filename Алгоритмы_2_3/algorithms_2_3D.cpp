#include <vector>
#include <algorithm>
#include <sstream>
#include <fstream>
#include <string>
#include <list>
#include <iostream>
#include <set>

using namespace std;

int main() {
    
    int n,num;
    string line;
    cin>>n;

    stringstream ss;
    
    set<int> all;
    for (int i = 0; i < n; ++i)
    {
        all.emplace_hint(all.end(), i+1);
    }
    
    while(1) {
        ss.clear();
        getline(cin, line);
        if(line != "HELP" && line != "YES" && line != "NO") {
            ss << line;
            continue;
        }
        if(line == "HELP") break;
        set<int> intersect;
        if(line == "YES") {
            set<int> yes;
            while(ss >> num)
                yes.insert(num);
            set_intersection(all.begin(),all.end(), yes.begin(), yes.end(),
                             inserter(intersect, intersect.begin()));
            all.swap(intersect);

        }
        if (line == "NO")
        {
//            set<int> no;
            while (ss>>num)
            {
                all.erase(num);
            }
//            set_difference(all.begin(), all.end(), no.begin(), no.end(), inserter(intersect, intersect.begin()));
        }
//        all.swap(intersect);
    }
    for (auto i:all) cout<<i<<" ";
}
