class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& q) {
        vector<int> ans(q.size());
        int x=q.size(),sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0)
          sum+=nums[i];//all even sum
            }
        for(int i=0;i<x;i++){
            int k=q[i][1];
            if(nums[k]%2==0)sum-=nums[k];//if even, reduce from sum and
            nums[k]+=q[i][0];// see if adding given value to it
            if(nums[k]%2==0)sum+=nums[k];//will result even or not
            ans[i]=sum;
        }    
        
        return ans;
    }
};