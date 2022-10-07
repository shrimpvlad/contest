#include <map>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word1, word2;
	map<string,string> syn;
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
    {
    	cin>>word1>>word2;
    	syn[word1] = word2;
    	syn[word2] = word1;
    }
	cin>>word1;
	cout<<syn[word1]<<endl;
}
