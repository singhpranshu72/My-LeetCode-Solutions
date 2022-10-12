class Solution {
public:
    bool check(int a,int b,int c){
        if((a+b)>c && (b+c)>a && (a+c)>b)return true;
        return false;
    }
    int largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        sort(begin(nums),end(nums));
        for(int i=n-1;i>=0;i--){
            if( i>=2 && check(nums[i],nums[i-1],nums[i-2]) )
                return nums[i]+nums[i-1]+nums[i-2];
        }
        return 0;
    }
};