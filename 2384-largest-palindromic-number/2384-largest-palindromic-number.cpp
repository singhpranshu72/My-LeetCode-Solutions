class Solution {
public:
    string largestPalindromic(string num) {
        map<int,int> m;
        string f="",mid="";
        for(auto v:num)m[v-'0']++;
        for(int i=9;i>=0;i--){
             if(i == 0 && f.empty())//to remove leading zeros
                continue;
          while(m[i]>1){
                f+=to_string(i);
                m[i]-=2;
            }
        }
        
        for(int i = 9;i>=0;i--)
        {
            if(m[i]) 
            {
                mid+= to_string(i);//get the greatest number of single frequencies
                break;
            }
        }
        string s=f;
        reverse(f.begin(),f.end());
     
        return s+mid+f;
    }
};