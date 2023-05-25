//{ Driver Code Starts
// Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
private:
   
   int recu(vector<int> &v, int target, int p, int idx, vector<vector<int>> &dp){
       if(target == 0) return 1;
       if(idx==0) return target == pow(v[idx], p);
       
       if(dp[idx][target]!=-1) return dp[idx][target];
       
       int notTake = recu(v, target, p, idx-1, dp);
       int take = 0;
       if(target>=pow(v[idx], p)) take = recu(v, target-pow(v[idx], p), p, idx-1, dp);
       return dp[idx][target] = (take + notTake)%1000000007;
   }
   
   public:
   int numOfWays(int n, int x)
   {
       vector<int> v;
       int val = pow(n, 1.0/x);
       for(int i=1; i<=val; i++) v.push_back(i);
       int sze = v.size();
       vector<vector<int>> dp(sze, vector<int>(n+1, -1));
       return recu(v, n, x, sze-1, dp)%1000000007;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int  n, x;
        cin >> n >> x;
        Solution ob;
        cout<<ob.numOfWays(n, x)<<endl;
    }
    return 0;
}

// } Driver Code Ends