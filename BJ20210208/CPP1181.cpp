#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(string, string);

int main()
{
    int N;
    vector<string> words;

    cin >> N;
    for(int i = 0; i < N; ++i)
    {
        string word;
        cin >> word;
        words.push_back(word);
    }

    sort(words.begin(), words.end(), comp);
    words.erase(unique(words.begin(), words.end()), words.end());

    for(string e : words)
    {
        cout << e << endl;
    }

    return 0;
}

bool comp(string str1, string str2)
{
    if(str1.length() == str2.length())
    {
        return str1 < str2;
    }
    else if(str1.length() < str2.length()) return true;
    else return false;
}