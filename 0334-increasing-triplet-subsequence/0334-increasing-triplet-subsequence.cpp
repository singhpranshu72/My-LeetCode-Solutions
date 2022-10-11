class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int one = INT_MAX, two = INT_MAX;
        for (auto num : nums) {
            if (num < one)
                one = num;//get the recent low
            else if (one < num && num < two)
                two = num;//mid ie j
            else if (two < num)
                return true;
        }
        return false;
//         int n=nums.size();
//         for(int i=0;i<n;i++){
           
//         }
        
    }
};