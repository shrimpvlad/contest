#include <set>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string code1, code2;
    cin>>code1>>code2;
    size_t count=0;
    multiset<string> codes_1;
    set<string> codes_2;
    for (int i = 0; i < code1.size()-1; ++i)
    {
        codes_1.insert(code1.substr(i,2));
//        cout<<code1.substr(i,2)<<" ";
        
    }
    for (int i = 0; i < code2.size()-1; ++i)
    {
        codes_2.insert(code2.substr(i,2));
    }
    for (const auto &c2: codes_2)
    {
        size_t n = codes_1.count(c2);
        count+=n;
    }
    cout<<count<<endl;
}
