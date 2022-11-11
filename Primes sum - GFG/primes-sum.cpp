//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    string isSumOfTwo(int n){
        vector<bool>sieve(n+1,1);
        sieve[0]=0,sieve[1]=0;
        for(int i=2;i*i<=n;i++){
            if(sieve[i]){
                for(int j=i*2;j<=n;j+=i){
                    sieve[j]=0;
                }
            }
        }
        for(int i=2;i<=n;i++){
            if(sieve[i] && sieve[n-i]){
                return "Yes";
            }
        }
        return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends