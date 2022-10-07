#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <map>

using namespace std;

struct Group
{
    int children;
    int pos;
    bool operator < ( const Group &g ) const
    {
        if (children == g.children)
            return pos < g.pos;
        return children < g.children;
    }
};

int main()
{
    int n,m,b,a,pos = 1;
    cin>>n>>m;
    vector<Group> groups(n);
    for (int i =0; i<n;++i)
    {
        cin>>a;
//        groups.insert({a,pos});
        groups[i] = {a,pos};
        pos++;
    }
    sort(groups.begin(),groups.end());
//    for (auto i:groups)
//        cout<<i.children<<"\t"<<i.pos<<endl;
    vector<Group> classrooms(m);
    pos = 1;
    for (int i =0; i<m;++i)
    {
        cin>>b;
        classrooms[i] = {b,pos};
        pos++;
    }
    sort(classrooms.begin(),classrooms.end());
    int tmp = 0, c=0;
    vector<int> out(n);
    for (int i = 0; i < n; ++i)
    {
        for (int j = c; j < m; ++j)
        {
            if (groups[i].children < classrooms[j].children)
            {
                out[groups[i].pos - 1] = classrooms[j].pos;
                tmp++;
                c = j+1;
                break;
            }
            if (j == m-1)
            {
                cout<<tmp<<endl;
                for (auto o:out)
                    cout<<o<<endl;
                return 0;

            }
        }
    }
    cout<<tmp<<endl;
    for (auto o:out)
        cout<<o<<endl;
}

