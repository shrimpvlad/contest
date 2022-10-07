#include <set>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    
    int n,m;
    cin>>n;
    vector<set<char>> wits(n);
    string wit;
    for (int i =0; i<n; ++i)
    {
        cin>>wit;
        set<char> let;
        for (char w: wit)
            let.insert(w);
        wits[i] = let;
    }
    
    cin>>m;
    vector<pair<string, int>> nums(m);
    int max = 0;
    string next;
    for (int i = 0; i < m; ++i)
    {
        int count = 0;
        cin>>next;
        set<char> number;
        for (char numb: next)
            number.insert(numb);
        for (auto w: wits)
        {
            set<char> inter;
            set_intersection(w.begin(), w.end(), number.begin(), number.end(), inserter(inter, inter.begin()));
            if (inter == w)
            {
                count++;
            }
        }
        nums[i] = {next, count};
        if (count>max)
            max = count;
    }
    for (auto nu:nums)
    {
        if (nu.second == max)
            cout<<nu.first<<endl;
    }

}


