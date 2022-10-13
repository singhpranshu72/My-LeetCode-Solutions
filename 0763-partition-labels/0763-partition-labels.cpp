class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]=i+1;  // har character ka ending index (last occurence) map krdo 
        }
        int left=0,right=0;
        // vector<char>v;
        vector<int>ans;
        for(int i=0;i<s.size();i++)
        {
            right=max(right,mp[s[i]]); // right pointer last occurence of left pointer ko point krega 
                           // jis char ka last occurence ka index jyda hoga utna bda partition bnega
            if(i==right-1) // maximum occurenc tk reach kr gye .. right-1 isliye kyonki hmne map me 1 based indexing ki hai aur ye loop 0 based indexing kr rhe hai
            {
                ans.push_back(right-left);
                left=i+1;  // fir left ko agle partion ke liye move kr dia
            }
        }
        return ans;
    }
};