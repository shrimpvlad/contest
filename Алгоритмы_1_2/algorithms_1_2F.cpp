#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,x;
//    bool flag = true;
    cin>>n;
    vector<int> vec, vec_out;
    for (int i = 0; i < n; ++i)
    {
        cin>>x;
        vec.push_back(x);
    }
    int count = 0;
    for (int i = 0; i <= vec.size()/2; ++i)
    {
        if (vec[i] == vec[vec.size()-i-1])
        {
            count++;
        }
        else
        {
//            cout<<"i = "<<i<<"\t" << count<<"\t";
            for (; count>=0; --count)
            {
                vec.push_back(vec[i-count]);
//                cout<<vec[i-count]<<" ";
            }
//            cout<<endl;
            count=0;
        }
        
    }
    if (vec.size()-n == 0)
    {
        cout<<0<<endl;
        return 0;
    }
    cout<<(vec.size()-n)<<endl;
    for (auto it = vec.rbegin(); it != vec.rend()-n; ++it)
        cout<<(*it)<<" ";
//    for (auto v:vec)
//        cout<<v<<" ";
    cout<<endl;
}

