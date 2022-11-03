class Solution {
public:
    int longestPalindrome(vector<string>& ws) {
        unordered_map<string,int> m;int ans=0,c=0;
        for(auto c:ws)m[c]++;
        for(int i=0;i<ws.size();i++){
            string p=ws[i];
            reverse(begin(p),end(p));
            if(p!=ws[i] && m[p]>0 && m[ws[i]]>0){
                m[p]--;
                m[ws[i]]--;
                ans+=4;cout<<ans<<" ";
            }
           else if(p==ws[i] && m[ws[i]]>1){
               m[ws[i]]-=2;
               ans+=4;
           }
            else if(p==ws[i] && m[ws[i]]>0 && c==0)
            {  ans+=2; c++;}
                // if(c==0){
                //     if(p==ws[i] && m[ws[i]]>0){
                //         m[ws[i]]--;
                //         ans+=2;
                //     }
                //     c++;
                
            
        }
        return ans;
    }
};