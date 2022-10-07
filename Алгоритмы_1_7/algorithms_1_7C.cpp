#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
    int n,d,x;
    cin>>n>>d;
    
    vector<pair<int, int>> vec(n);
    
    for (int i = 0; i < n; ++i)
    {
        cin>>x;
        vec[i] = {x,i};
    }
    sort(vec.begin(), vec.end());
    int count = 1, max = 1, start = 0;
    vector<int> ticket(n);
    ticket[vec[0].second] = 1;
    for (auto i = 1; i < n; ++i)
    {
        if (vec[i].first - vec[i-1].first > d)
        {
            count = 1;
            start = i;
            ticket[vec[i].second] = count;
        }
        else
        {
            if (vec[i].first - vec[start].first <= d)
            {
                ++count;
                ticket[vec[i].second] = count;
            }
            else
            {
                ticket[vec[i].second] = ticket[vec[start].second];
                start++;
            }

        }
        if (count>max)
            max = count;
    }
    cout<<max<<endl;
//    sort(ticket.begin(), ticket.end())
    for (const auto &t: ticket)
        cout<<t<<" ";
}

