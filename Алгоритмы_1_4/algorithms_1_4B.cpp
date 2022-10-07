#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
	string line, word;
	map<string, int> words;
	ifstream file("input.txt");
	while (getline(file,line))
    {
    	istringstream ss(line);
    	while (ss>>word)
        {
        	cout<<words[word]<<" ";
        	words[word]++;
        }
    }
}
