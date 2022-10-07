#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
	string str;
	cin>>str;
	queue<char> q;
	for (int i = 0; i<str.size(); i++)
    {
    	if (str[i] == '(')
        	q.push('(');
    	else 
        {
        	if (q.empty() || q.front() == ')')
            {
            	cout<<"NO"<<endl;
            	return 0;
            }
        	q.pop();
        }
    }
	(q.empty()) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
}
