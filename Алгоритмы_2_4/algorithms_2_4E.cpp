#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    string line, word;
    ifstream file("input.txt");
    map<int, string> all;
    map<string, pair<int,int>> theme;
//    map<string, string> theme1;
    int n,m,count = 1, count_theme = 1;
    getline(file,line);
    int tmp = 1;
    istringstream sn(line);
    sn>>n;
    for (int j =0;j<n;++j)
    {
        while (getline(file,line))
        {
            istringstream ss(line);
            ss>>m;
            if (m == 0) {
                getline(file,line);
                istringstream s1(line);
                string str;
                while (s1>>word)
                    str+=word+" ";
                str.pop_back();
                getline(file,line);
//                theme[count] =;
                all[count] = str;
                theme[str] = {count_theme,1};
                count_theme++;

            }
            else {
                getline(file,line);
                all[count] = all[m];
                theme[all[m]].second++;
            }
            count++;
        }
    }
    int max = 0, ind = 0;
    string fin;
    for (auto &[fir,sec] : theme)
    {
        if ((sec.second > max) || (sec.second == max && ind > sec.first))
        {
            max = sec.second;
            ind = sec.first;
            fin = fir;
        }
        
//        cout<<first<<"\t"<<second<<endl;
    }
    cout<<fin<<endl;
}
