//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool wifiRange(int N, string S, int X){
        // code here
        vector<int>v;
       for(int i = 0;i<N;i++){
            if(S[i] == '1'){
               v.push_back(i);
            }
       }
     if(v[0] != 0 && v[0] > X) return false;
     if(v[v.size()-1] != N-1 && N-1-v[v.size()-1] >X) return false;
      for(int i = 0;i<v.size()-1;i++){
           if(v[i+1] -v[i]-1 > X*2) return false;
      }
      return true;
    }
};

//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, X;
        string S;
        cin >> N >> X >> S;
        Solution obj;
        cout << obj.wifiRange(N, S, X) << "\n";
    }
}

// } Driver Code Ends