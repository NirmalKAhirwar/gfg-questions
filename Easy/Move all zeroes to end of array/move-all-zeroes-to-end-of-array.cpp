//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int zptr = 0; //zero pointer
        int nptr = 0; //non-zero pointer 
        int temp;
       
        for(int i=0;i<n;i++)
        {
            if (arr[nptr] == 0)
            {
                nptr++;
            }
            else if (arr[zptr]!=0)
            {
            zptr++;
            nptr++;
            }
            else
            {
                temp =arr[zptr];
                arr[zptr]=arr[nptr];
                arr[nptr]=temp;
                zptr++;
                nptr++;
            }
          
        }
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends