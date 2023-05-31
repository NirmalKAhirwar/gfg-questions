//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    void solve(vector<vector<int>>&ans,vector<int>&v,vector<vector<int>> &grid,
    int row,int col,int n,int m){
    if(row==n-1 && col==m-1){
      v.push_back(grid[row][col]);
      ans.push_back(v);
      v.pop_back();//Backtrack
        return;    
    }
    
    if(row>=n)return;
    if(col>=m)return;
    
    v.push_back(grid[row][col]);
    solve(ans,v,grid,row+1,col,n,m);
    solve(ans,v,grid,row,col+1,n,m);
    v.pop_back();//Backtrack
}
    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
    {
        // code here
        vector<vector<int>>ans;
          vector<int>v;
          solve(ans,v,grid,0,0,n,m);
          return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution ob;
        auto ans = ob.findAllPossiblePaths(n, m, grid);
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}

// } Driver Code Ends