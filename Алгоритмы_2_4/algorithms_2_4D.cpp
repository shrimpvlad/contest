#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <cmath>
#include <algorithm>


using namespace std;

struct Info {
    string name;
    int votes;
    int pos;
    float rem;
    int in;
};

int main() {
    string line,word;
    int n = 0,sum=0;
    int i = 1;
    vector<Info> partys;
    ifstream file("input.txt");
    while (getline(file,line)) {
        istringstream ss(line);
        vector<string> str;
        while (ss>>word) {
            str.push_back(word);
        }
        string a;
        for (int i=0;i<str.size()-1;++i)
            a+=str[i]+" ";
        a.pop_back();
        n = stoi(str[str.size()-1]);
        sum+=n;
        partys.push_back({a,n,i,0,0});
        i++;
    }

    double f = (double)sum / 450;
    int free = 450;
    for (auto &p: partys) {
        p.in = int(p.votes / f);
        free-= int(p.votes / f);
        
        p.rem = fmod (p.votes,f);

    }
    sort(partys.begin(),partys.end(),[](Info p1, Info p2){
        if(p1.rem == p2.rem)
            return (p1.votes>p2.votes);
        return (p1.rem>p2.rem);
    });
    for (int i=0; i<free;++i) {
        partys[i].in+=1;
    }
    sort(partys.begin(),partys.end(),[](Info p1, Info p2){
        return (p1.pos<p2.pos);
    });
    for (auto i: partys)
        cout<<i.name<<" "<<i.in<<endl;
}
