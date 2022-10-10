class Solution {
public:int mod=1e9+7;
    int baba(vector<vector<int>>& grid, int k,int i,int j,int sum, vector<vector<vector<int>>> &dp){
        
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size())
            return 0;
        if(i==grid.size()-1 && j==grid[0].size()-1){
            sum+=grid[i][j];
            if(sum%k==0)return 1;
            return 0;
        }
        if(dp[i][j][sum%k]!=-1)return dp[i][j][sum%k];
        
        long long dwn=baba(grid,k,i+1,j,sum+grid[i][j],dp);
        long long rght=baba(grid,k,i,j+1,sum+grid[i][j],dp);
        
        return dp[i][j][sum%k]=(dwn%mod+rght%mod)%mod;
    }
    int numberOfPaths(vector<vector<int>>& grid, int k) {
        vector<vector<vector<int>>>dp(grid.size(),vector<vector<int>>(grid[0].size(),vector<int>(51,-1)));
        return baba(grid,k,0,0,0,dp);
    }
};