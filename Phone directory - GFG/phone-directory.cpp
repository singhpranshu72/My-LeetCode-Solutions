//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<string>> displayContacts(int n, string arr[], string s)
    {
       map<string,int>m;

        for(int i=0;i<n;i++)

        m[arr[i]]++;

        

        vector<vector<string> > ans;

      

        for(int k=0;k<s.size();k++){

             vector<string>v;

              for(auto it:m){

                 if(it.first.substr(0,k+1) == s.substr(0,k+1))

                  v.push_back(it.first);

             }

                if(v.size() == 0)

                v.push_back("0");

             ans.push_back(v);

        }

        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string contact[n], s;
        for(int i = 0;i < n;i++)
            cin>>contact[i];
        cin>>s;
        
        Solution ob;
        vector<vector<string>> ans = ob.displayContacts(n, contact, s);
        for(int i = 0;i < s.size();i++){
            for(auto u: ans[i])
                cout<<u<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends