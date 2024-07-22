#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
string longestCommonPrefix(vector<string> &v)
{
    string ans = "";
    sort(v.begin(), v.end());
    int n = v.size();
    string first = v[0], last = v[n - 1];
    for (int i = 0; i < min(first.size(), last.size()); i++)
    {
        if (first[i] != last[i])
        {
            return ans;
        }
        ans += first[i];
    }
    return ans;
}

int main()
{
    vector<string> v = {"flower", "flow", "flight"};
    cout << longestCommonPrefix(v) << endl;

    return 0;
}