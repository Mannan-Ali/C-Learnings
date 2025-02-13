#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>> &matrix)
{
            int rowSize = matrix.size();
        int colSize = matrix[0].size();
        vector<vector<int>> result(colSize, vector<int>(rowSize));
        for (int i = 0; i < rowSize; i++) {
            for (int j = 0; j < colSize; j++) {
                result[j][i] = matrix[i][j];
            }
        }
        return result;
}

int main()
{
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    transpose(matrix);
    for(int i =0 ;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<" ";
        }
    }

    return 0;
}