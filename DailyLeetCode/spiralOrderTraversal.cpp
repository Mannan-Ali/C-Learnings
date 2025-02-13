#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int row_start = 0;
    int row_end = matrix.size()-1;
    int col_start = 0;
    int col_end = matrix[0].size()-1;

    while (row_start <= row_end && col_start <= col_end)
    {
        for (int k = col_start; k <=col_end; k++)
        {
            cout << matrix[row_start][k] << " ";
        }
        row_start++;
        for (int k = row_start; k <= row_end; k++)
        {
            cout << matrix[k][col_end] << " ";
        }
        col_end--;
        for (int k = col_end; k >=col_start ; k--)
        {
            cout << matrix[row_end][k] << " ";
        }
        row_end--;
        for (int k = row_end; k >= row_start; k--)
        {
            cout << matrix[k][col_start] << " ";
        }
        col_start++;

    }
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    spiralOrder(matrix);
    return 0;
}