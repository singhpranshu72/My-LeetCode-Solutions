//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
             int n = s.size();
            string result = "";
            //code here.
            for(int i = n-1; i >= 0; --i){
                string faker = "";
                while(s[i] >= '0' && s[i] <= '9' && i >= 0){
                    faker += s[i];
                    --i;
                }
                reverse(faker.begin(), faker.end());
                if(i >= 0){
                    result += faker + s[i];
                }
                else{
                    result += faker;
                }
            }
            return result;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends