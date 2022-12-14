//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findRange(string str, int n) {
        
        int count = 0 ;

        vector<int>arr(n) ;

        

        for( int i = 0 ; i < n ; i++ )

        {

            if( str[i] == '0' )

            {

               arr[i] = 1 ;

               count++    ;

              

            }

            else{

                arr[i] = -1 ;

              

            }

            

           

        }

        

        if( count == 0 ) return {-1} ;

        

        int ans = 0 ;

        int start = 0 , end = 0 ;

        int p = 0 ;

        int temp = 0 ;

        

        

       

        for( int i = 0 ; i < n ; i++ )

        {

            temp += arr[i] ;

            

            if( temp < 0 )

            {

                temp = 0   ;

                 p = i+1   ;

            }

            if( temp > ans )

            {

               

                ans = temp ;

                start = p  ;

                end = i    ;

               

            }

        }

        

        return { start+1 , end+1 } ;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        Solution ob;
        auto ans = ob.findRange(s, n);

        if (ans.size() == 1) {
            cout << ans[0] << "\n";
        } else {
            cout << ans[0] << " " << ans[1] << "\n";
        }
    }
    return 0;
}
// } Driver Code Ends