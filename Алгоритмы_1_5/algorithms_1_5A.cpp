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
    long long n,m,x;
    cin>>n;
    vector<long long> vec1(n);
    for (int i = 0; i < n; ++i)
    {
        cin>>x;
        vec1[i] = x;
    }
    cin>>m;
    vector<long long> vec2(m);
    for (int i = 0; i < m; ++i)
    {
        cin>>x;
        vec2[i] = x;
    }
    size_t i = 0, j = 0;
    size_t best_i = 0, best_j = 0;
    size_t best_result = max(vec2[m-1],vec1[n-1]) + 1;
    
    while (i < n && j < m)
    {
        if (vec1[i] == vec2[j])
        {
            cout<<vec1[i]<<" "<<vec2[j]<<endl;
            return 0;
        }
        size_t new_result = abs(vec2[j] - vec1[i]);
        if (new_result < best_result)
        {
            best_i = i;
            best_j = j;
            best_result = new_result;
        }
        if (vec1[i] > vec2[j])
            j++;
        else
            i++;
    }
    cout<<vec1[best_i]<<" "<<vec2[best_j]<<endl;
}
