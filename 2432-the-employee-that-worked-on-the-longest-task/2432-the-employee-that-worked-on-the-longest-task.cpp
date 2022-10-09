class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        vector<pair<int,int>> v;
        v.push_back({logs[0][0],logs[0][1]});
        for(int i=1;i<logs.size();i++){
           
                v.push_back({logs[i][0],(logs[i][1]-logs[i-1][1])});
            
        }
        int min=INT_MIN;int ans=0,r=8456;
        for(auto c:v){
            if(c.second>=min){
                if(c.second==min){
                    if(c.first<ans)ans=c.first;
                }
                else
                { min=c.second;
                ans=c.first;
                }
            }
        }
        return ans;
    }
};