//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     //Your code here
     int i = 0, j = 0;
    while(i<s.length())
    {
        if(s[i]==x[j])
        {
            int k=i;
            while(s[k]==x[j] && k<s.length())
                k++,j++;
            if(j==x.length())
                return i;
        }
        i++;
        j = 0;
    }
    return -1;
}