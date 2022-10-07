#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> a;
  int n, bb;
  cin >>n;
  for (int i = 0; i < n; ++i){
    cin >> bb;
    a.push_back(bb) ;
     } 
  cout << a[a.size()/2];
  return 0;
}
