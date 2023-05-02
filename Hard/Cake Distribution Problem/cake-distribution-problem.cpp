//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
    public:
    int maxSweetness(vector<int>& sweetness, int N, int K) {
    // Write your code here.
    auto arr = sweetness;
    int sum = 0;
        for(int i=0;i<N;i++)
        {
            sum+=arr[i];
        }
        int l = 0;
        int h = sum;
        int ans = INT_MIN;
        int mid;
        while(l<=h)
        {
            mid = (l+h)>>1;
            int ct = K+1;
            int sm = 0;
            int i=0;
            while(i<N)
            {
                sm+=arr[i];
                if(sm>=mid)
                {
                    ct--;
                    sm=0;
                }
                i++;
            }
            if(ct<=0)
            {
                l = mid+1;
                ans = max(ans,mid);
            }
            else{
                h = mid-1;
            }
            
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> sweetness(n);
        for (int i = 0; i < n; i++) {
            cin >> sweetness[i];
        }
          Solution ob;
          int res=ob.maxSweetness(sweetness, n, k);
        cout << res << endl;
    }
}
// } Driver Code Ends