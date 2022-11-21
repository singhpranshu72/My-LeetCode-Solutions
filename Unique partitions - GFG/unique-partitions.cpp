//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
private:
        vector <vector<int>> a;
	public:
	    void dfs(int i, vector <int> &b){
	        if(i == 0){
	            a.push_back(b);
	            return;
	        }
	        for(int j=0; j<i; j++){
	            if(b.empty() || i-j <= b.back()){
                    b.push_back(i-j);
                    dfs(j, b);
                    b.pop_back();
                }
	        }
	    }
        vector<vector<int>> UniquePartitions(int n) {
            vector <int> b;
            dfs(n, b);
            return a;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		vector<vector<int>> ans = ob.UniquePartitions(n);
    	for(auto i : ans)
    		for(auto j: i)
    			cout << j <<" ";
    	cout << "\n";
	}  
	return 0;
}
// } Driver Code Ends