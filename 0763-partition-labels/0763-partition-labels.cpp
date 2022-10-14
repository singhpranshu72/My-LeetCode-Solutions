class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
           char c=s[i];
            mp[c]=i;//get the last index of every character
        }
        vector<int> ans;
        int prev=-1;//prev to make parts(it is starting value of any part)
        int maxi=0;//it will store the last index or say largest partition size
        for(int i=0;i<s.size();i++){
            maxi=max(maxi,mp[s[i]]);//in first ex. it will store 8 as a last index is 8 
            if(maxi==i){// index p phuch gye jha sabhi letters aa gye h aur wo ek partirion ka last hoga
                ans.push_back(maxi-prev);//just store the size
                prev=maxi;//initialise prev as maxi
            }
        }
        return ans;
    }
};