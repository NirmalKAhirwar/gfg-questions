//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isStraightHand(int N, int groupSize, vector<int> &hand) {
        // code here
        if(N%groupSize != 0) return false;
        multiset<int> s;
        for(int ele: hand) s.insert(ele);
        
        while(!s.empty()) {
            int cur = *s.begin();
            for(int i = 0; i < groupSize; i++, cur++) {
                auto it = s.find(cur);
                if(it == s.end()) return false;
                
                s.erase(it);
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, groupSize;
        cin >> N >> groupSize;

        vector<int> hand(N);
        for (int i = 0; i < N; i++) cin >> hand[i];

        Solution obj;
        int ans = obj.isStraightHand(N, groupSize, hand);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends