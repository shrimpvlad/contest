#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a,count1=1,count2=1,max=1;
    bool flag1 = false, flag2 = false;
    vector<int> vec(10);
    for (int i = 0; i < 10; ++i) {
        cin>>a;
        vec[i] = a;
    }
    for (int i = 0; i < 10; ++i) {
        if (vec[i] == 1) {
            for (int j = i-1; j >= 0; --j) {
                if (vec[j] == 2) {
                    flag1 = true;
                    break;
                }
                count1++;
            }
            for (int j = i+1; j < 10; ++j) {
                if (vec[j] == 2) {
                    flag2 = true;
                    break;
                }
                count2++;
            }
        
            int r1 = count1 * flag1;
            int r2 = count2 * flag2;
            
            if (r1<=r2 && r1>0 && r1>max) max = r1;
            if (r1<=r2 && r1==0 && r2>max) max = r2;
            if (r2<=r1 && r2>0 && r2>max) max = r2;
            if (r2<=r1 && r2==0 && r1>max) max = r1;

            flag1 = flag2 = false;
            count1 = count2 = 1;
            
        }
    }
    cout<<max<<endl;
}
