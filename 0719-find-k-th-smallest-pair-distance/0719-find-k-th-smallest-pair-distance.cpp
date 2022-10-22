class Solution {
public:
    bool check(int mid,vector<int> &nums,int k){
      int total=0;
      int j=0,n=nums.size();
      for(int i=0;i<n;i++){
        while(j<n && nums[j]-nums[i]<=mid)j++;
        j--;
        total+=(j-i);
      }
      return total>=k;
    }
    int smallestDistancePair(vector<int>& nums, int k) {
      int n = nums.size();
      sort(nums.begin(),nums.end());
        //ans can range from 0 to highest abs difference(i.e.nums[n-1]-nums[0] );
      int l=0,r = nums[n-1]-nums[0];// max possible val i can get is nums(hghest)-nums(lowest) in example sort 1,3,1 ---> 1, 1 ,3 now one can get max abs diff as 2 only
      while(l<r){
        int mid = (l+r)/2;
        if(check(mid,nums,k)){//if we can get less pairs than mid
          r=mid;
        }
        else{
          l=mid+1;
        }
      }
      return l; 
    }
};