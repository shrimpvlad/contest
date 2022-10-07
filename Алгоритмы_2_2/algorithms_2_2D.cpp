#include <iostream>


using namespace std;

int main() {
    int l,n,p,start = 0;
    cin>>l>>n;
    for (int i = 0; i < n; ++i) {
        cin>>p;
        if (l%2 !=0 && p == l/2) {
            cout<<p<<endl;
            break;
        }
        if (p<l/2) start = p;
        else {
            cout<<start<<" "<<p<<endl;
            break;
        }
    }
    
}
