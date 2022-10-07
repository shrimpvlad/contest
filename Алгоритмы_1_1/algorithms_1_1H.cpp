#include <iostream>

using namespace std;

int main()
{
    int a,b,n,m;
    cin>>a>>b>>n>>m;
    
    int min_a = a*(n-1)+n;
    int min_b = b*(m-1)+m;
    
    int max_a = a*(n+1)+n;
    int max_b = b*(m+1)+m;
    
    int min_ab = max(min_a, min_b);
    int max_ab = min(max_a, max_b);
    
    if (max_ab >= min_ab)
        cout<<min_ab<<" "<<max_ab<<endl;
    else
        cout<<(-1)<<endl;
}
