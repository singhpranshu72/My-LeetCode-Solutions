class Solution {
public:
    bool subarr(vector<int>& nums, int m,int limit){
       long int sum=0,cnt=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>limit)return false;
            if((sum+nums[i])>limit){
                cnt++;
                sum=nums[i];
            }
            else{
                sum+=nums[i];
            }
        }
        return cnt<=m;
    }
    int splitArray(vector<int>& nums, int m) {
        long int l=*max_element(nums.begin(),nums.end());
        long int h=accumulate(nums.begin(),nums.end(),0);
        int ans=h;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(subarr(nums,m,mid)==false){
                l=mid+1;
            }
            else{
                ans=mid;
                h=mid-1;
            }
        }
        return ans;
    }
};