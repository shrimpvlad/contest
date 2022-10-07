#include <iostream>
#include <string>
#include <sstream>
#include <array>
#include <vector>

using namespace std;

int Time(int d1, int h1, int m1, int d2, int h2, int m2)
{
    return (d1-d2)*60*24 + (h1-h2)*60 + (m1-m2);
}

int main()
{
    int n;
    cin>>n;
    int id,day,hour,minute,status;
    char stat;
    vector<array<int,5>> vec(n);
    for (int i = 0; i < n; ++i)
    {
        cin>>day>>hour>>minute>>id>>stat;
        if (stat == 'A' || stat == 'B')
            status = 1;
        else
            status = 2;
        vec[i] = {id,day,hour,minute,status};
    }
    sort(vec.begin(), vec.end());
    int count1 = 0, count2 = 0;
    int tmp1 = vec[0][0];
//    cout <<tmp1<<endl;
    for (int i = 0; i < n; ++i)
    {
        if (tmp1 != vec[i][0])
        {
            cout<<count1<<" ";
            count1=0;
            count2=0;
            tmp1 = vec[i][0];
        }
        if (count2>0)
        {
            count1 += Time(vec[i][1],vec[i][2],vec[i][3],vec[i-1][1],vec[i-1][2],vec[i-1][3]);
        }
        
        
        if (vec[i][4] == 1 && count2 == 0)
            count2++;
        else if (vec[i][4] == 2 && count2 > 0)
            count2--;
    }
    cout<<count1<<endl;
}

