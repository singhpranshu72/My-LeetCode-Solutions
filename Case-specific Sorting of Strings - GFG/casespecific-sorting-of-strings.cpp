//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string s, int n)
    {
              // your code here

        long long int all[52]={0};

        for(auto i:s)

        {

         if(i>='a'&&i<='z')

         all[i-71]++;

         else

         all[i-65]++;

        }

         string ans="";

         for(auto i:s)

         {

             if(i>='a'&&i<='z')

             {

                 for(int i=26;i<52;i++){

                 if(all[i]!=0)

                 {

                     ans+=i+71;

                     all[i]--;

                     break;

                 }

                 }

             }

             else

             {

                 for(int i=0;i<26;i++){

                 if(all[i]!=0)

                 {

                     ans+=i+65;

                     all[i]--;

                     break;

                 }

                 }

             }

         }

         return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends