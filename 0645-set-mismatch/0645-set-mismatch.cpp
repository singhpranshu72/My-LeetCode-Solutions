class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
//         int n=nums.size();
//         vector<int> v,ans;
//         for(int i=0;i<n;i++){
//             v[nums[i]]++;
//         }
//         for(auto c:v)cout<<c<<" ";
//         for(int i=1;i<=n;i++){
//             if(v[i]==2)ans.push_back(i);
//            else if(v[i]==0)ans.push_back(i);
            
//             if(ans.size()==2)return ans;
//         }
//         return ans;
         //sum of elements on nums
    int initialSum = accumulate(nums.begin(), nums.end(), 0);

    //put the element of nums into set to remove the duplicate number
    set<int> s;
    for(auto &i: nums){
        s.insert(i);
    }

    //sum of elements of the set
    int sum = accumulate(s.begin(), s.end(), 0);

    //difference of initialSum and sum will give us the repeated number
    int repeatedNum = initialSum - sum;

    //subtracting the sum of elements in set i.e. sum from the sum of the natural numbers will give us the missing number
	int n = nums.size();
    int missingNum = n * (n+1)/2 - sum;

    return {repeatedNum, missingNum};
    }
};