//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
public:
    vector<long long> smallerSum(int n,vector<int> &arr){
        // Code here
        unordered_map<int, long long> map;
        vector<long long> ans(n);
        vector<int> arrcpy(arr);
        
        sort(arrcpy.begin(), arrcpy.end());
        
        long long prefixSum = arrcpy[0];
        map[arrcpy[0]] = 0;
        
        for(int i = 1; i < n; i++) {
            if(arrcpy[i-1] == arrcpy[i]) {
                long long sum = map[arrcpy[i-1]];
                map[arrcpy[i]] = sum;
            }
            else {
                map[arrcpy[i]] = prefixSum;
            }
            
            prefixSum += arrcpy[i];
        }
        
        for(int i = 0; i < n; i++) {
            ans[i] = map[arr[i]];
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob; 
        vector<long long> ans=ob.smallerSum(n,arr);
        for(int i=0;i<n;i++){
            if(i!=n-1){
                cout<<ans[i]<<" ";
            }
            else{
                cout<<ans[i]<<endl;
            }
        }
    }
    return 0;
}
// } Driver Code Ends