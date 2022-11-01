//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
         vector<int> nv,pv;
       for(int i=0;i<n;i++){
           if(arr[i]>=0)pv.push_back(arr[i]);
           else
           nv.push_back(arr[i]);
       }int k=0;
       for(int i=0;i<pv.size();i++)
       arr[i]=pv[i];
       for(int i=pv.size();i<n;i++){
       arr[i]=nv[k];k++;}
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends