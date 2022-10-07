#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,x,a;
    cin>>n;
    if (n==0)
        return 0;
    vector<int> vec(n);
    for (int i = 0; i<n; ++i)
    {
        cin>>a;
        vec[i]=a;
    }
    cin>>x;
    int min = vec[0];
    for (int i = 1; i < n; ++i)
    {
        if (abs(vec[i] - x) < abs(min - x))
            min = vec[i];
    }
    cout<<min<<endl;
}
