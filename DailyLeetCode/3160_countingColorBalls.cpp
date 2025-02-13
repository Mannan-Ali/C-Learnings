#include <bits/stdc++.h>
using namespace std;

void queryResults(int limit, vector<vector<int>> &queries)
{
    unordered_map<int, int> bc;
    unordered_map<int,int> cf;
    vector<int> result;
    for (auto &i : queries)
    {
        bc[i[0]] = i[1];
        cf[i[1]]++;
        result.push_back(cf.size());
    }
}
int main()
{
    vector<vector<int>> queries = {{0, 1}, {1, 2}, {2, 2}, {3, 4}, {4, 5}};
    queryResults(4, queries);
    return 0;
}