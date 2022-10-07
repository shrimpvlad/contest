#include <vector>
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    int n,m,x,price;
    
    cin>>n;
    vector<int> classes(n);
    for (int i = 0; i < n; ++i)
    {
        cin>>x;
        classes[i]=x;
    }
    sort(classes.begin(), classes.end());
    
    cin>>m;
    map<int,int> cond;
    
    for (int i = 0; i < m; ++i)
    {
        cin>>x>>price;
//        if (price>max_pr)
//            max_pr = price;
        if (cond.count(x)>0)
            cond[x] = min(cond[x],price);
        else
            cond[x]=price;
    }
    int max_pr = (*cond.rbegin()).second + 1;
    vector<pair<int,int>> vec;
    for (auto it = cond.rbegin(); it!= cond.rend(); ++it)
    {
        if ((*it).second < max_pr)
        {
            vec.push_back({(*it).first, (*it).second});
            max_pr = (*it).second;
        }
    }
    long long count = 0;
    int right = vec.size()-1;
    for (auto cl: classes)
    {
        while (cl>vec[right].first && right>=0)
        {
            right--;
        }
        count+=vec[right].second;
    }
    cout<<count<<endl;
//    for (auto v:vec)
//        cout<<v.first<<"\t"<<v.second<<endl;
}
