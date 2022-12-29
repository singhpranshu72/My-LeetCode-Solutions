//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int nu[], int n)
    {
    int largest=0;
        unordered_set<int>s;
        
        for(int i=0;i<n;i++)
            s.insert(nu[i]);
        for(auto b:s){
        int p=b-1;//agar b se ek chota element h to sequence b s nhi chalu hoga agar nhi to start from b
            if(s.find(p)==s.end()){//jb p nhi milega tb,matlab current element b se ek chota nhi h array m
               int next_element=b+1;
                int c=1;
                while(s.find(next_element)!=s.end()){
                   next_element++;
                    c++;
                }
                if(c>largest)
                largest=max(largest,c);
            }
        }
                                             return largest;
      
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends