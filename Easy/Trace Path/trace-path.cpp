//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int isPossible(int n, int m, string s){
        // code here
         int a=0,b=0,c=0,d=0;
        for(int i=0;i<s.length();i++) {
            if(s[i]=='L') { a++; if(b!=0) b--;}
            else if(s[i]=='R') { b++; if(a!=0) a--;}
            else if(s[i]=='D') { c++; if(d!=0) d--;}
            else if(s[i]=='U') { d++; if(c!=0) c--;}
            if(a>=m or b>=m or c>=n or d>=n) return 0;
         }
         return 1;
        }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.isPossible(n, m, s)<<endl;
    }
    return 0;
}
// } Driver Code Ends