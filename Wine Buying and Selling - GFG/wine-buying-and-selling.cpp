//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
  long long int wineSelling(vector<int>& Arr, int N){
      long long int ans = 0;
        int sell = 0;
        int buy = 0;
        
        while(buy < N && Arr[buy] <= 0)
            ++buy;//keep it on first +ve
            
        while(sell < N && Arr[sell] >= 0)
            ++sell;//on first -ve
            
        while(buy < N && sell < N)
        {
            int buyy = Arr[buy];
            int selll = abs(Arr[sell]);
            
            Arr[buy] -= min(buyy, selll);
            Arr[sell] += min(buyy, selll);
            ans += min(buyy, selll)*abs(buy-sell);
            
            while(buy < N && Arr[buy] <= 0)
                ++buy;
                
            while(sell < N && Arr[sell] >= 0)
                ++sell;
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
        long long int ans = ob.wineSelling(arr,n);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends