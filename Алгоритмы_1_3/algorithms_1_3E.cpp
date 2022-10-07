#include <iostream>
#include <set>

using namespace std;

int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    set<int> values = {x,y,z};
    string value;
    cin>>value;
    for (int i = 0; i<value.size(); ++i)
    {
        values.insert(value[i] - '0');
    }
    cout<<values.size() - 3<<endl;
}
