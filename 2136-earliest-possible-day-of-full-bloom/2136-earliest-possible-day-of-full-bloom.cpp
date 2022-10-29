class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
         vector<pair<int,int>>arr;
        for(int i = 0;i < plantTime.size();i++){
            arr.push_back(make_pair(growTime[i],plantTime[i]));
        }
        sort(arr.begin(),arr.end(),greater<pair<int,int>>());//sort in desc.
        // for(auto it : arr){
        //     cout << it.first << " " << it.second << endl;
        // }
        int day = 0,ans = 0;
        for(int i = 0;i < arr.size();i++){
            day += arr[i].second;//plant time
            ans = max(day+arr[i].first,ans);//plant time+grow time
            // cout << ans << endl;
        }
        
        return ans;
    }
};