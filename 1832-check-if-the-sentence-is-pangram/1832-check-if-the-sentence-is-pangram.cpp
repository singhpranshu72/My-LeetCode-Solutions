class Solution {
public:
    bool checkIfPangram(string s) {
         unordered_map<char,int>m;
        for(auto c:s)m[c-'a']++;
        for(int i=0;i<26;i++){
            if(m[i]==0)
                return false;
        }return true;
    
    }
};