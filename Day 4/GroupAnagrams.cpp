#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <sstream>

using namespace std;

string getSignature(const string &s)
{
    vector<int> count(26, 0);
    for (char c : s)
    {
        count[c - 'a']++;
    }

    stringstream ss;
    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            ss << (char)('a' + i) << count[i];
        }
    }
    return ss.str();
}

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    vector<vector<string>> result;
    unordered_map<string, vector<string>> groups;

    for (const string &s : strs)
    {
        groups[getSignature(s)].push_back(s);
    }

    for (const auto &entry : groups)
    {
        result.push_back(entry.second);
    }

    return result;
}

int main()
{
    vector<string> strs;
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;
    cout << "Enter the strings: ";
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        strs.push_back(s);
    }
    vector<vector<string>> result = groupAnagrams(strs);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}