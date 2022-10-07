#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <set>

using namespace std;

int main()
{
	string line, word;
	set<string> diff_words;
	ifstream file("input.txt");
	while (getline(file,line))
    {
    	istringstream ss(line);
    	while (ss>>word)
        {
        	diff_words.insert(word);
        }
    }
	cout<<diff_words.size()<<endl;
}
