#include <iostream>
#include <vector>
#include <string>

using namespace std;

int strStr(string haystack, string needle)
{
    if (haystack.length() < needle.length())
    {
        return -1;
    }

    for (int i = 0; i <= haystack.length() - needle.length(); i++)
    {
        if (haystack.substr(i, needle.length()) == needle)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    string haystack = "hello", needle = "ll";
    cout << strStr(haystack, needle) << endl;

        return 0;
}