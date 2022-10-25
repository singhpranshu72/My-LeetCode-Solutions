class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& w1, vector<string>& w2) {
        int n=w1.size();int m=w2.size();string s,p;
        for(int i=0;i<n;i++){
            s+=w1[i];
        }
         for(int i=0;i<m;i++){
            p+=w2[i];
        }
        if(s==p)
        return true;
        return false;
    }
};