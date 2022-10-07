#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,m,k,a,b;
    cin>>n>>m>>k;
    vector<vector<int>> vec;
    for (int i = 0; i<n+2; ++i)
    {
        vector<int> vec1(m+2);
        vec.push_back(vec1);
    }
    vector<int> vec_extr1 = {-1,-1,-1,0,1,1,1,0};
    vector<int> vec_extr2 = {-1,0,1,1,1,0,-1,-1};
    vector<pair<int,int>> bombs(k);
    for (int i = 0; i<k; ++i)
    {
        cin>>a>>b;
        bombs[i] = {a,b};
    }
    
    for (int i = 0; i<k; ++i)
    {
        for (int j = 0; j<8; ++j)
        {
            vec[bombs[i].first + vec_extr1[j]][bombs[i].second + vec_extr2[j]]++;
        }
    }
    for (int i = 0; i<k; ++i)
    {
        vec[bombs[i].first][bombs[i].second] = -1;
    }
    for (int i = 1; i<n+1; ++i)
    {
        for (int j = 1; j<m+1; ++j)
        {
            if (vec[i][j] == -1)
                cout<<"* ";
            else
                cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
}
