//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
        int largestArea(int n,int m,int k,vector<vector<int>> &enemy)
        {
           
           vector<int>row,col;
           row.push_back(0);
           col.push_back(0);
           for(auto i:enemy)
           {
               row.push_back(i[0]);
               col.push_back(i[1]);
           }
           row.push_back(n+1);
           col.push_back(m+1);
           sort(row.begin(),row.end());
           sort(col.begin(),col.end());
           int maxrow=0;
           int maxcol=0;
           for(int i=1;i<col.size();i++)
           {
               maxrow=max(maxrow,row[i]-row[i-1]-1);
               maxcol=max(maxcol,col[i]-col[i-1]-1);
           }
           return maxrow*maxcol;
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int k;
        cin>>k;
        vector<vector<int>> e(k,vector<int>(2));
        for(int i=0;i<k;i++)
            cin>>e[i][0]>>e[i][1];
        Solution a;
        cout<<a.largestArea(n,m,k,e)<<endl;
    }
    return 0;
}
// } Driver Code Ends