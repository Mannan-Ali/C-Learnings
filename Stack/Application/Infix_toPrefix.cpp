#include <bits/stdc++.h>
using namespace std;

int pre(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    return -1;
}

string prefix(string st)
{
    reverse(st.begin(),st.end());
    stack<char> pf;
    string result;

    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] >= '0' && st[i] <= '9' || st[i] >= 'a' && st[i] <= 'z' || st[i] >= 'A' && st[i] <= 'Z')
        {
            result += st[i];
        }
        else if (st[i] == ')')
        {
            pf.push(st[i]);
        }
        else if (st[i] == '(')
        {
            while (!pf.empty() && pf.top() != ')')
            {
                result += pf.top();
                pf.pop();
            }
            if (!pf.empty())
            {
                pf.pop();
            }
        }
        else
        {
            while (!pf.empty() && pre(pf.top()) > pre(st[i]))
            {
                result += pf.top();
                pf.pop();
            }
            pf.push(st[i]);
        }
    }
    while (!pf.empty())
    {
        result += pf.top();
        pf.pop();
    }
    reverse(result.begin(),result.end());
    return result;
}
int main()
{
    string infix = "(a-b/c)*(a/k-1)";
    cout << prefix(infix);
}