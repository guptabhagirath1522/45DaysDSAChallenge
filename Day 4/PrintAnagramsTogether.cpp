#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<string>> Anagrams(vector<string> &string_list)
    {
        unordered_map<string, vector<string>> anagram_map;
        vector<vector<string>> result;

        for (string &s : string_list)
        {
            string sorted_str = s;
            sort(sorted_str.begin(), sorted_str.end());
            anagram_map[sorted_str].push_back(s);
        }

        for (string &s : string_list)
        {
            string sorted_str = s;
            sort(sorted_str.begin(), sorted_str.end());
            if (anagram_map.find(sorted_str) != anagram_map.end())
            {
                result.push_back(anagram_map[sorted_str]);
                anagram_map.erase(sorted_str);
            }
        }

        return result;
    }
};

int main()
{
    Solution sol;
    vector<string> string_list = {"act", "god", "cat", "dog", "tac"};
    vector<vector<string>> anagrams = sol.Anagrams(string_list);

    for (const auto &group : anagrams)
    {
        for (const auto &str : group)
        {
            cout << str << " ";
        }
        cout << endl;
    }

    return 0;
}
