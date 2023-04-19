//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        long long first = 1;
        long long second = 1;
        long long third;
        vector<long long> ans;
        //code here
        if (n == 1) 
        {
            ans.push_back(first);
            return ans;
        }
        if (n == 2)
        {
            ans.push_back(first);
            ans.push_back(second);
            return ans;
        }
        ans.push_back(first);
        ans.push_back(second);
        
        for(int i = 3; i <=n; i++)
        {
            third = first + second;
            ans.push_back(third);
            first = second;
            second = third;
        }
        
        return ans;
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
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends