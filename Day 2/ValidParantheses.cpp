#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool isValid(string s)
{
    stack<char> st;
    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            st.push(c);
        }
        else
        {
            if (st.empty() ||
                (c == ')' && st.top() != '(') || (c == '}' && st.top() != '{') || (c == ']' && st.top() != '['))
            {
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}

int main()
{
    string s;
    cout << "Enter the string: ";
    getline(cin, s);
    if (isValid(s))
        cout << "Valid Parantheses" << endl;
    else
        cout << "Not Valid Parantheses" << endl;
    return 0;
}