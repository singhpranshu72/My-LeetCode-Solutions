//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        map<int,int>mp;

        for(int i=0;i<nums.size();i++){

            mp[nums[i]%k]++;

            nums[i]=nums[i]%k;

        }

        for(auto i:nums){

            // cout<<i.first<<" "<<i.second<<endl;

            if(mp[i]>0&&(mp[(k-(i))%k]>=1)){

                mp[i]--;mp[(k-(i))%k]--;

            }

            else if(mp[i]>0) {
                return false;
            }
            else if(mp[i]<0)return false;
        }
        return true;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends