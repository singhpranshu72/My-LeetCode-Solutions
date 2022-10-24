class Solution {
public:
    int countTime(string s) {int c=0,sum=0;
            if(s[0]=='?' && s[1]!='?'){
                if((s[1]-'0')>=4)sum+=2;
                else
                    sum+=3;
            }
        else if(s[0]!='?' && s[1]=='?'){
            if((s[0]-'0')==2)sum+=4;
                else
                    sum+=10;
        }
          else if(s[0]=='?' && s[1]=='?')   {
              
              sum+=24;
          }                   
                             if(sum==0)sum=1;
             if(s[3]=='?' && s[4]!='?')sum*=6;
            else if(s[3]!='?' && s[4]=='?')sum*=10;
                else if(s[3]=='?' && s[4]=='?')sum*=60;
                             
//         for(int i=2;i<s.size();i++){
//             if(s[i]=='?')c++;
//         }    cout<<sum<<" "<<c;
                               //  if(c==0)return sum;
                               //  if(c==1 && s[2]=='?')sum*=6;
                               // if(c==1 && s[3]=='?')sum*=10;
                               //  if(c==2)sum*=60;
                                return sum;
    }
};