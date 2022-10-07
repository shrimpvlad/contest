#include <string>
#include <iostream>
#include <sstream>
#include <set>
#include <cctype>
#include <vector>
using namespace std;

int main()
{
    string str,name1,name2,name3;

    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    vector<string> res;
    int n,a,b,r;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        cin>>str;

        set<char> set_char;

        auto pos1 = str.find(",");
        name1 = str.substr(0, pos1);
        for (const auto &c:name1)
            set_char.insert(c);
        int t =  (tolower(name1[0]) - 'a' + 1) * 256;

        auto pos2 = str.find(",", pos1+1);
        name2 = str.substr(pos1+1, pos2 - pos1 - 1);
        for (const auto &c:name2)
            set_char.insert(c);

        auto pos3 = str.find(",", pos2+1);
        name3 = str.substr(pos2+1, pos3 - pos2 - 1);
        for (const auto &c:name3)
            set_char.insert(c);

        int count = 0;
        auto pos4 = str.find(",", pos3+1);
        a = stoi(str.substr(pos3+1, pos4-pos3-1));
        while (a>0)
        {
            count+=a%10;
            a=a/10;
        }

        auto pos5 = str.find(",", pos4+1);
        b = stoi(str.substr(pos4+1, pos5-pos4-1));
        while (b>0)
        {
            count+=b%10;
            b=b/10;
        }
        count*=64;


        count += set_char.size() + t;
        string hexdec_num="";
        while(count>0)
        {
            r = count % 16;
            hexdec_num = hex[r] + hexdec_num;
            count = count/16;
        }
        auto size = hexdec_num.size();
        if (size==0)
            cout<<"000 ";
        else if (size == 1)
            cout<<"00"<<hexdec_num<<" ";
        else if (size == 2)
            cout<<"0"<<hexdec_num<<" ";
        else
            cout<<hexdec_num[size-3]<<hexdec_num[size-2]<<hexdec_num[size-1]<<" ";
    }
}
