#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <set>
#include <algorithm>
using namespace std;

bool Compare(map<string, set<string>> &dic, string &word)
{
    string word_low = word;
    for_each(word_low.begin(), word_low.end(), [](char & c){c = tolower(c);});
    if (dic.count(word_low) > 0)
    {
        for (const auto &w: dic[word_low])
        {
            if (w == word)
                return false;
        }
        return true;
    }
    else
    {
        int count = 0;
        for (int i = 0; i< word.size(); ++i)
        {
            if (word[i] != word_low[i])
                count++;
        }
        if (count == 0 || count > 1)
            return true;
        return false;
    }
    return true;
}

int main()
{
    string line, word, word_low;
    int n;
    map<string, set<string>> dic;
    ifstream file("input.txt");
    getline(file,line);
    istringstream ss1(line);
    ss1>>n;
    for (int i = 0; i < n; ++i)
    {
        getline(file,line);
        istringstream ss2(line);
        ss2>>word;
        word_low = word;
        for_each(word_low.begin(), word_low.end(), [](char & c){c = tolower(c);});
        dic[word_low].insert(word);
    }
    int count = 0;
    getline(file,line);
    istringstream ss3(line);
    while (ss3>>word)
    {
        count+=Compare(dic, word);
        
    }
    cout<<count<<endl;
//    for (auto &[f,s]: dic)
//    {
//        cout<<f<<"\t";
//        for (auto sec: s)
//            cout<<sec<<" ";
//        cout<<endl;
//    }
}
