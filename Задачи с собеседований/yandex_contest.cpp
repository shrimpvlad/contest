//#include <iostream>
//#include <vector>
//#include <string>
//#include <fstream>
//#include <sstream>
//#include <cmath>
//#include <map>
//#include <set>
//#include <cctype>
//
//using namespace std;

///#1
//int main() {
//    map<size_t, char > alph;
//    char a = 'a';
//    for (int i = 0; i < 26; i++)
//        alph[pow(2,i)] = a+i;
//    alph[33554432*2]=' ';
//    int n;
//    int num1=0,num2=0;
//    cin>>n;
//    for (int i=0;i<n;++i) {
//        cin>>num2;
//        cout<<alph[abs(num2-num1)];
//        num1=num2;
//    }
//}





//////#3
//long long gcd (long long a, long long b) {
//    return b ? gcd (b, a % b) : a;
//}
//
//long long maxPrimeFactors(long long n)
//{
//    long long maxPrime = 1;
//    while (n % 2 == 0) {
//        maxPrime = 2;
//        n >>= 1;
//    }
//     while (n % 3 == 0) {
//        maxPrime = 3;
//        n=n/3;
//    }
//    for (long long i = 5; i <= sqrt(n); i += 6) {
//        while (n % i == 0) {
//            maxPrime = i;
//            n = n / i;
//        }
//        while (n % (i+2) == 0) {
//            maxPrime = i+2;
//            n = n / (i+2);
//        }
//    }
//    if (n > 4)
//        maxPrime = n;
//    return maxPrime;
//}
//
//int main(void)
//{
//    int n;
//    cin>>n;
//    long long a,b;
//    for (int i=0;i<n;++i) {
//        cin>>a>>b;
//        if (min(a,b)==1) {
//            cout<<max(a,b)<<endl;
//        }
//        else {
//            long long num = gcd(a,b);
//            long long tmp1 = a/num;
//            long long tmp2 = b/num;
//
//            long long pf3 = maxPrimeFactors(tmp1);
//            long long pf4 = maxPrimeFactors(tmp2);
//            (pf3>pf4) ? cout<<num*pf3<<endl : cout<<num*pf4<<endl;
//        }
//    }
//}




//#2
//
//int main() {
//    int n,m;
//    cin>>n>>m;
//    char c;
//    vector<vector<char>> vec(n);
//    vector<vector<char>> out(n);
//    for (int i=0;i<n;++i) {
//        vector<char> vert(m);
//        vector<char> v(m);
//        for (int j=0;j<m;++j)
//        {
//            cin>>c;
//            if (c=='/')
//                vert[m-1-j] = '\\';
//            else if (c == '\\')
//                vert[m-1-j]='/';
//            else
//                vert[m-1-j]=c;
//            v[j]='.';
//        }
//        vec[i] = vert;
//        out[i] = v;
//    }
//
//    for (int i=0;i<n;++i) {
//        vector<char> gor(m);
//        for (int j=0;j<m;++j)
//        {
//            if (vec[i][j] == '/') {
//                out[n-i][j] = '\\';
//            }
//            else if (vec[i][j] == '\\') {
//                out[n-i][j] = '/';
//            }
//            else
//                out[n-i-1][j] = vec[i][j];
//        }
//    }
//    cout<<"+++++++++++++"<<endl;
//    for (int i=0;i<n;++i) {
//        for (int j=0;j<m;++j)
//        {
//            cout<<out[i][j];
//        }
//        cout<<endl;
//    }
//}


/// #4
//struct Elements {
//    int ans;
//    int dist;
//    int z;
//    int o;
//};
//int main()
//{
//    int n, count1 = 0,prev0 = 0,prev1 = 0;
//    string str,line;
////    cin>>n;
//
////    unsigned long start_time =  clock();
//
//    ifstream file("input.txt");
//    getline(file,line);
//    istringstream tmp(line);
//    tmp>>n;
//    getline(file,line);
//    istringstream tmp2(line);
//    tmp2>>str;
//    vector<Elements> elem(n);
//
//    for (int i=0; i<n; ++i) {
//        char a = str[i];
//        if (a == '1') {
//
//            count1++;
//
//            elem[i] = {0,prev1, i-count1+1, count1};
//            prev1 = 1;
//            if (prev0 > 0)
//            {
//                prev0++;
//            }
//        }
//        else
//        {
//            elem[i] = {0,prev0, i-count1+1, count1};
//            prev0 = 1;
//            if (prev1 > 0)
//            {
//                prev1++;
//            }
//        }
//
//
//        auto el = elem[i];
//
//        if (el.dist == 0) {
//
//            elem[i].ans = -1;
//            continue;
//        }
//
//        auto prev = elem[i-el.dist];
//
//        if (prev.ans == -1)
//        {
//
//            if (el.dist < 3)
//            {
//                elem[i].ans = i - el.dist + 1;
//            }
//            else
//            {
//                elem[i].ans = -1;
//            }
//            continue;
//        }
//
//        auto mid = elem[prev.ans-1];
//
//        if (abs((prev.o-mid.o)-(prev.z-mid.z)) >= el.dist-2)
//        {
//            elem[i].ans = prev.ans;
//            continue;
//        }
//
//        elem[i].ans = -1;
//
//    }
//
////    cout<<endl<<"v = ";
//    for (auto x:elem) cout<<x.ans<<" ";
////    unsigned long end_time = clock(); // конечное время
////    unsigned long search_time = end_time - start_time; // искомое время
////    cout<<endl<<"-----"<<(float)search_time/CLOCKS_PER_SEC<<endl;
////    cout<<"count0 = "<<count0<<"count1 = "<<count1<<endl;
//}
