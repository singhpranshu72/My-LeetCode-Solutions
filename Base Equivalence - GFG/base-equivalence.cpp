//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string baseEquiv(int n, int m){
       int low=2;
        int high=32;
        
        while(low<=high)
        {
            int mid=(low+high)/2;
            int power=ceil(log(n)/log(mid));
            if(power==m)
            {
                return "Yes";
            }
            if(power>m)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        
        return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        Solution ob;
        cout<<ob.baseEquiv(n,m)<<endl;
    }
    return 0;
}

// } Driver Code Ends