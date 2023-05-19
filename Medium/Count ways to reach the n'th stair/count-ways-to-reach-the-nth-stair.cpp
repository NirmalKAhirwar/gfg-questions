//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int MOD = 1e9 + 7;
    int solve(vector<int> &dp, int n)
    {   
        if(n == 1) return 1;
        if (n == 2) return 2;
        if(n == 3) return 3;
        if(dp[n] != 0) return dp[n];

        dp[n] = solve(dp, n-1)%MOD + solve(dp, n-2)%MOD;
        
        return dp[n];
    }
    int countWays(int n)
    {
        // your code here
        vector<int> dp(n+1);

        int ans = solve(dp, n);
        return ans%MOD;
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends