#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{
    vector<int> row;
    vector<int> col;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (matrix[i][j] == 0)
            {
                row.push_back(i);
                col.push_back(j);
            }
        }
    }
    for (int i = 0; i < col.size(); i++)
    {
        int cols = col[i];
        for (int j = 0; j < matrix.size(); j++)
        {
            matrix[j][cols] = 0;
        }
    }
    for (int i = 0; i < row.size(); i++)
    {
        int rows = row[i];
        for (int j = 0; j < matrix[rows].size(); j++)
        {
            matrix[rows][j] = 0;
        }
    }
    return;
}

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    setZeroes(matrix);
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}