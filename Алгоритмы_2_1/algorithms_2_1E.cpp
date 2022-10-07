#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float d,x,y;
    cin>>d>>x>>y;
    float distA = sqrt(x*x + y*y);
    float distB = sqrt(pow(d-x,2) + y*y);
    float distC = sqrt(x*x + pow(d-y,2));
//    cout<<"distA = "<<distA<<"distB = "<<distB<<"distC = "<<distC<<endl;
    if (x>=0 && y>=0 && y<=(d-x))
        cout<<0<<endl;
    else if (distA <= distB && distA <= distC)
        cout<<1<<endl;
    else if (distB < distA && distB <= distC)
        cout<<2<<endl;
    //else if (distC > distA && distC > distA)
    else
        cout<<3<<endl;
}
