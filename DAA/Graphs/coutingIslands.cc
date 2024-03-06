//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void dfs(int row, int col, vector<vector<int>> &vis, vector<vector<char>> &grid)
    {

        vis[row][col] = 1;

        int m = grid.size();
        int n = grid[0].size();

        for (int i = -1; i <= 1; i++)
        {
            for (int j = -1; j <= 1; j++)
            {

                int nrow = row + i;
                int ncol = col + j;

                if (!vis[nrow][ncol] && grid[nrow][ncol] == '1' && nrow >= 0 && nrow < m && ncol >= 0 && ncol < n)
                {
                   
                    dfs(nrow, ncol, vis, grid);
                }
            }
        }
    }


// Function to find the number of islands.
int
numIslands(vector<vector<char>> &grid)
{
    // Code here
    int row = grid.size();
    int ctr = 0;
    int col = grid[0].size();
    vector<vector<int>> vis(row, vector<int>(col, 0));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; col++)
        {
            if (vis[i][j] == 0 && grid[i][j] == '1')
            {
                ctr++;
                dfs(i, j, vis, grid);
            }
        }
    }

    return ctr;
}
}
;

//{ Driver Code Starts.
int main()
{
    int tc=1;
    // cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}

// } Driver Code Ends