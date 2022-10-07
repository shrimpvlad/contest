#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <set>
#include <vector>
#include <cmath>

using namespace std;



int main()
{
    long long n,k,x;
    cin>>n>>k;
    vector<long long> vec(n);
    for (int i = 0; i<n; ++i)
    {
        cin>>x;
        vec[i]=x;
    }
    int left=0, right=0;
    long long part_sum = vec[0];
    int count=0;
    while (left < n && right < n)
    {
        if (part_sum == k)
        {
            count++;
            part_sum-=vec[left];
            left++;
            right++;
            part_sum+=vec[right];
        }
        else if (part_sum < k && right < n-1)
        {
            right++;
            part_sum+=vec[right];
        }
        else if (part_sum>k)
        {
            part_sum-=vec[left];
            left++;
        }
        else
            break;
        
    }
    cout<<count<<endl;
}
