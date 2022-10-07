#include <vector>
#include <iostream>
#include <map>

using namespace std;

vector<int> Merge(vector<int> v1, vector<int> v2, int t1, int t2)
{
    vector<int> v3(v1.size()+v2.size());
    int first1 = 0, first2 = 0;
    for (int i = 0; i < v3.size(); ++i)
    {
        if (first1 != v1.size() && (first2 == v2.size() || v1[first1]<v2[first2]))
        {
            v3[i] = v1[first1];
            first1++;
        }
        else
        {
            v3[i] = v2[first2];
            first2++;
        }
    }
    return v3;
}

int main()
{
    int n,k,x;
    cin>>n>>k;
    vector<int> trees(n);
    for (int i = 0; i < n; ++i)
    {
        cin>>x;
        trees[i] = x;
    }
    map<int,int> tr;
    
    int left = 0;
    int right = 0;
    
    while (tr.size()<k)
    {
        tr[trees[right]]++;
        right++;
    }
    right--;
//    cout<<right<<endl;
    
    int min = 0;
    int max = right;

    while (right<n)
    {
//        cout<<tr[trees[left]]<<endl;
        if (tr[trees[left]] > 1)
        {
            tr[trees[left]]--;
            left++;
            if (right - left < max - min)
            {
                max = right;
                min = left;
            }
//            cout<<min<<"\t"<<max<<endl;
        }
        else
        {
            right++;
            tr[trees[right]]++;
        }
    }
//    for (auto t: trees)
//        cout<<t<<endl;
    cout<<min+1<<" "<<max+1<<endl;
}
