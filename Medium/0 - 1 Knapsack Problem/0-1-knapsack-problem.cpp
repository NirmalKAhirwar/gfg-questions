//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<int> T(W+1,0);
       vector<int> B(W+1,0);
       /* for other indices */
       for(int i=n-1 ; i>=0 ; i--)
       {
           for(int w=0 ; w<=W ; w++)
           {
               int v1 = B[w];
               int v2 = w >= wt[i] ? val[i] + B[w-wt[i]] : INT_MIN;
               
               T[w] = max(v1,v2);
           }
           
           for(int w=0 ; w<=W ; w++) B[w]=T[w] ;
       }
       
       /* find max */
       int out = B[0];
       for(int w=0 ; w<=W ; w++) out=max(out,B[w]);
       return out ;
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends