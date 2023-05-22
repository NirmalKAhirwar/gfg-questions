//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
    int solve(int n, vector<int> p){
        // code here
        /*
        key idea: whatever be the central node of star tree only the leaf nodes 
        will remain and they will be connected to the central node.
        rest all the edges have to be deleted.
        
        so i am just subtracting the edges which will be left in the end.
        
        */
       int ans=n-1;//initially there will be n-1 edges.
       
       vector<int>deg(n);
       for(int i=1;i<n;i++){
           deg[p[i]]++;
           deg[i]++;
       }
       
       for(int i=0;i<n;i++)if(deg[i]==1)ans--;// whenever we encounter a leaf node 
       //then that edge will be saved. so we subtracted that.
       
       return ans;
    }
        
    
};


//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        vector<int> p(N);
        for(int i = 0; i < N; i++){
            cin >> p[i];
        }

        Solution obj;
        cout << obj.solve(N, p) << "\n";
    }
}   
// } Driver Code Ends