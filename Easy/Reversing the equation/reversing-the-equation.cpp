//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
            stack<string> st;
            string temp = ""; // temporary string to push and pop numbers in the same order 
            
            for(int i = 0; i < s.length(); i++){
                if(s[i] - '0' >= 0 && s[i] - '9' <= 0) temp += s[i]; // if it is a digit store it in temp
                else{
                    // if it is not a number
                    if(temp.size()){
                        st.push(temp);  // push the previously stored number on to the stack 
                        temp = "";
                    }
                    
                    st.push(string(1, s[i])); // push the current operator on the stack 
                }
            }
            
            // in case the last number is not pushed
            if(temp.size()){
                    st.push(temp);
                    temp = "";
            }
            
            // pop the stack to obtain the reverse of the equation 
            string sol = "";
            while(!st.empty()){
                sol += st.top();
                st.pop();
            }
            
            return sol;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends