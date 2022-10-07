#include <iostream>
#include <vector>

using namespace std;

bool Condition(const vector<int> &vec, const int &m, const int &count)
{
    int sum = 0;
    for (const auto &v: vec)
        sum += v/m;
    if (sum >= count)
        return true;
    return false;
}

int main()
{
    int n,m,p, max=0;
    cin>>n>>m;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i)
    {
        cin>>p;
        vec[i]=p;
        if (p>max)
            max=p;
    }
    int l = 0;
    int r = max;
//    cout<<"r = "<<r<<endl;
    int mid = 0;
    while (l<r)
    {
        mid = (l+r+1)/2;
        if (Condition(vec, mid, m))
            l=mid;
        else
            r = mid - 1;
//        cout<<"l = "<<l<<"\t r = "<<r<<endl;
    }
    cout<<l<<endl;
}

