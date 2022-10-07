#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str, number, code = "495", number_new;
    cin>>str;
    for (int i = 0; i< str.size(); ++i)
    {
        if (isdigit(str[i]))
            number+=str[i];
    }
    if (number.size() == 7)
        number = "8" + code + number;
//    cout<<number<<endl;
    for (int i =0; i< 3; ++i)
    {
        cin>>str;
        for (int j = 0; j< str.size(); ++j)
        {
            if (isdigit(str[j]))
                number_new+=str[j];
        }

        if (number_new.size() == 7)
            number_new = "8" + code + number_new;

        if (number_new.substr(1,10) == number.substr(1,10))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        number_new="";
    }
}
