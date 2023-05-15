//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    long long power(int x, long long n) {
        long long int res = 1;
    
        while(n) {
            if(n & 1)
                res *= x;
            x *= x;
            n = n >> 1;
        }
    
        return res;
    }
    // there is pattern for this, just crack that pattern,
    // & you'll get the answer
  public:
    long long countBits(long long n) {
        // base case
        if(n <= 1)
            return n;
    
        // pattern, formula
        long long x = log2(n);
        // totalSetBits = x * 2^(x-1) + (n - 2^x + 1) + repeat(n - 2^x)
    
        long long power2x = power(2, x-1);
    
        return x * power2x + (n - power2x * 2 + 1) + countBits(n - power(2, x));
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        long long N;
        scanf("%lld",&N);
        
        Solution obj;
        long long res = obj.countBits(N);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends