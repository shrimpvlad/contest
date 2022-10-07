#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int n;
    string name;
    map<string,int> vote;
    while (cin>>name) {
        cin>>n;
        vote[name]+=n;
    }
    for (auto [first, second]: vote) {
        cout<<first<<" "<<second<<endl;
    }
}
