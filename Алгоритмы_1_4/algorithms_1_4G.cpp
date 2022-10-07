#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    long long count;
    map<string, long long> data;
    string line, name, activ, name2;
    ifstream file("input.txt");
    while (getline(file,line))
    {
        istringstream ss(line);
        ss>>activ;
        
        if (activ == "DEPOSIT")
        {
            ss>>name>>count;
            data[name]+=count;
            
        }
        else if (activ == "WITHDRAW")
        {
            ss>>name>>count;
            data[name]-=count;
            
        }
        else if (activ == "BALANCE")
        {
            ss>>name;
            if (data.count(name)!=0)
                cout<<data[name]<<endl;
            else
                cout<<"ERROR"<<endl;
            
        }
        else if (activ == "TRANSFER")
        {
            ss>>name>>name2>>count;
            data[name]-=count;
            data[name2]+=count;
            
        }
        else if (activ == "INCOME")
        {
            ss>>count;
            for (auto &[first,second]: data)
            {
            	if (second>0)
                	second = (second*(100+count))/100;
            }
            
        }
        
    
    }
}
