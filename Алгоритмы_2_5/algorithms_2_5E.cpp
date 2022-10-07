#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <map>

using namespace std;

struct Element
{
    int elem;
    int pos;
    bool operator< ( const Element &e ) const { return elem < e.elem; }
};

int main()
{
    int s,n1,n2,n3,a;
    cin>>s;
    cin>>n1;
    set<Element> set1;
    int count = 1;

    for (int i =0;i<n1;++i)
    {
        cin>>a;
        if (a<s)
            set1.insert({a,count});
        count++;
    }
    
    cin>>n2;
    set<Element> set2;
    count = 1;

    for (int i =0;i<n2;++i)
    {
        cin>>a;
        if (a<s)
            set2.insert({a,count});
        count++;
    }
    
    cin>>n3;
    set<Element> set3;
    count = 1;

    for (int i =0;i<n3;++i)
    {
        cin>>a;
        if (a<s)
            set3.insert({a,count});
        count++;
    }
    
    int i = 1'000'000, j = 1'000'000, k = 1'000'000;
    bool flag = false;
    for (const auto &s1: set1)
    {
        if (s1.elem >= s)
            break;
        if (s1.pos > i)
            continue;
        for (const auto &s2: set2)
        {
            if (s1.elem + s2.elem >= s)
                break;
            if (s1.pos == i && s2.pos > j)
                continue;
            Element t = {s - s1.elem - s2.elem, 18};
            auto position = set3.find(t);
            if (position != set3.end())
            {
                i = s1.pos;
                j = s2.pos;
                k = (*position).pos;
                flag = true;
            }
            
        }
    }
    (flag) ? cout<< i-1 <<" "<< j-1 <<" "<< k-1 << endl : cout<<(-1)<<endl;
	return 0;
}
