//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    int totalTime(int n, vector<int> &arr, vector<int> &time) {
        // code here
        int totaltime = -1;
        vector<int> v;
        unordered_map<int,int> mp;
        for(int i = 1;i <= n;i++){
            mp[i] = -1;
        }
        for(int i = 0;i<arr.size();i++){
            if(mp[arr[i]] >= 0){
                int rem_time = totaltime - v[mp[arr[i]]];
                rem_time = time[arr[i]-1] - rem_time;
                if(rem_time > 0)
                    totaltime += rem_time;
                else totaltime++;
            }
            else totaltime++;
            mp[arr[i]] = i;
            v.push_back(totaltime);
           // cout<<totaltime<<" ";
        }
        // for(auto i : v)
        //     cout<<i<<" ";
        
        // cout<<endl;
        
        return totaltime;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        vector<int> arr(n);
        Array::input(arr,n);
        
        
        vector<int> time(n);
        Array::input(time,n);
        
        Solution obj;
        int res = obj.totalTime(n, arr, time);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends