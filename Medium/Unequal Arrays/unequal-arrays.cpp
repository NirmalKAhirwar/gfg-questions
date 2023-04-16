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
    long long solve(int N, vector<int> &A, vector<int> &B) {
        // code here
        long long int i,ans=0,od1=0,od2=0,ev1=0,ev2=0,s1=0,s2=0;
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
         
        vector<long long int>v1,v2,v3,v4;
        
        
         for(i=0;i<N;i++)
        {
            s1+=A[i];
            s2+=B[i];
            if(A[i]&1)
            { od1++; v1.push_back(A[i]);}
            else
            {ev1++; v2.push_back(A[i]); }
            if(B[i]&1)
            {od2++;   v3.push_back(B[i]); }
            else
            {ev2++;   v4.push_back(B[i]); }
        }
       
        if(ev1!=ev2 || od1!=od2)
        return -1;
        if(s1!=s2)
        return -1;
        
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());sort(v3.begin(),v3.end());sort(v4.begin(),v4.end());
        for(i=0;i<v1.size();i++)
        {
             if(v1[i] > v3[i])
             ans+=v1[i]-v3[i];
        }
        for(i=0;i<v2.size();i++)
        {
            if(v2[i] > v4[i])
            ans+=v2[i]-v4[i];
        }
        return ans/2;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        
        vector<int> B(N);
        Array::input(B,N);
        
        Solution obj;
        long long res = obj.solve(N, A, B);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends