#include <set>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    string language;
    set<string> all_lang;
    multiset<string> all_stud;
    for (int i = 0; i < n; ++i)
    {
        cin>>m;
        for (int j = 0; j < m; ++j)
        {
            cin>>language;
            all_lang.insert(language);
            all_stud.insert(language);
        }
    }
    set<string> all;
    for (const auto &al: all_lang)
    {
        if (all_stud.count(al) == n)
            all.insert(al);
    }
    cout<<all.size()<<endl;
    for (const auto &a: all)
        cout<<a<<endl;
    cout<<all_lang.size()<<endl;
    for (const auto &al: all_lang)
        cout<<al<<endl;
}
