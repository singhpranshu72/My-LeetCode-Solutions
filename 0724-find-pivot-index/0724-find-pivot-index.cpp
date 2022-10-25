class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0,psum=0;//make a running prefix sum;
        sum=accumulate(begin(nums),end(nums),0);
        for(int i=0;i<nums.size();i++){
            if(psum+psum+nums[i]==sum)return i;
            psum+=nums[i];
        }
        return -1;
    }
};