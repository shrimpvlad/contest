#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    long double left = 30.0, right = 4000.0, prev, now;
    int n;
    string rate;
    cin>>n>>prev;
    for (int i = 0; i<n-1; ++i)
    {
        cin>>now>>rate;
        if (abs(now-prev) < pow(10,-6))
            continue;
        if (rate == "closer")
        {
            if (now > prev)
                left = max(left, (now+prev)/2.);

            else
                right = min(right, (prev+now)/2.);
        }
        else
        {
            if (now<prev)
                left = max(left, (prev+now)/2.);
            else
                right = min(right, (now+prev)/2.);

        }
        prev = now;
    }
    cout<<setprecision(10)<<left<<" "<<setprecision(10)<<right<<endl;
}