#include <bits/stdc++.h>
using namespace std;

bool checkisSafe(int x, int y, int n, vector<vector<int>> &m, vector<vector<int>> &visitedArray)
{
    if ((x >= 0 && x < n) && (y >= 0 && y < n) && (m[x][y] == 1) && (visitedArray[x][y] == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void ratInaMaze(vector<vector<int>> &m, int x, int y, int n, vector<vector<int>> &visitedArray, string path, vector<string> &ans)
{
    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(path);
        return;
    }
    // marking the path of rat as 1
    visitedArray[x][y] = 1;

    // down
    int newx = x + 1;
    int newy = y;
    if (checkisSafe(newx, newy, n, m, visitedArray))
    {
        path.push_back('D');
        ratInaMaze(m, newx, newy, n, visitedArray, path, ans);
        path.pop_back();
    }

    // left
    newx = x;
    newy = y - 1;
    if (checkisSafe(newx, newy, n, m, visitedArray))
    {
        path.push_back('L');
        ratInaMaze(m, newx, newy, n, visitedArray, path, ans);
        path.pop_back();
    }

    // right
    newx = x;
    newy = y + 1;
    if (checkisSafe(newx, newy, n, m, visitedArray))
    {
        path.push_back('R');
        ratInaMaze(m, newx, newy, n, visitedArray, path, ans);
        path.pop_back();
    }

    // up
    newx = x - 1;
    newy = y;
    if (checkisSafe(newx, newy, n, m, visitedArray))
    {
        path.push_back('U');
        ratInaMaze(m, newx, newy, n, visitedArray, path, ans);
        path.pop_back();
    }

    // as backtracking marking it 0
    visitedArray[x][y] = 0;
}

int main()
{
    vector<vector<int>> matrix = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    int n = matrix.size();
    vector<vector<int>> visitedArray(n, vector<int>(n, 0));
    vector<string> ans;
    string path = "";
    ratInaMaze(matrix, 0, 0, n, visitedArray, path, ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}