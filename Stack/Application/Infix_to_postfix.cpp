// #include <bits/stdc++.h>
// using namespace std;

// int pre(char c)
// {
//     if (c == '^')
//         return 3;
//     else if (c == '*' || c == '/')
//         return 2;
//     else if (c == '+' || c == '-')
//         return 1;
//     return -1;
// }

// string postfix(string st)
// {
//     stack<char> pf;
//     string result;
//     for (int i = 0; i < st.size(); i++)
//     {
//         if (st[i] >= '0' && st[i] <= '9' || st[i] >= 'a' && st[i] <= 'z' || st[i] >= 'A' && st[i] <= 'Z')
//         {
//             result += st[i];
//         }
//         else if (st[i] == '(')
//         {
//             pf.push(st[i]);
//         }
//         else if (st[i] == ')')
//         {
//             while (!pf.empty() && pf.top() != '(')
//             {
//                 result += pf.top();
//                 pf.pop();
//             }
//             if (!pf.empty())
//             {
//                 pf.pop();
//             }
//         }
//         else
//         {
//             while (!pf.empty() && pre(pf.top()) > pre(st[i]))
//             {
//                 result += pf.top();
//                 pf.pop();
//             }
//             pf.push(st[i]);
//         }
//     }
//     while (!pf.empty())
//     {
//         result += pf.top();
//         pf.pop();
//     }
//     return result;
// }
// int main()
// {
//     string infix = "a+b*c*d";
//     cout << postfix(infix);
// }

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

string postfix(string st)
{
    stack<char> pf;
    string result;
    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] >= '0' && st[i] <= '9' || isalpha(st[i]))
        {
            result += st[i];
        }
        else if (st[i] == '(')
        {
            pf.push(st[i]);
        }
        else if (st[i] == ')')
        {
            while (!pf.empty() && pf.top() != '(')
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
            while (!pf.empty() && pre(pf.top()) >= pre(st[i]) && pf.top() != '(')
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
    return result;
}

int main()
{
    string infix = "a+b*c*d/w-a";
    cout << postfix(infix);
}
