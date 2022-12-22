//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n ) {
         unordered_map<int, int> prefix_sums;

  // Initialize the count to 0
  long long int count = 0;

  // Initialize the prefix sum to 0
  long long int sum = 0;

  // Iterate through the array and update the prefix sum
  for (int i = 0; i < n; i++) {
    sum += arr[i];

    // If the prefix sum is 0, then we have found a subarray with sum 0
    if (sum == 0) {
      count++;
    }

    // Check if the prefix sum has occurred before
    if (prefix_sums.find(sum) != prefix_sums.end()) {
      // If it has occurred before, then we have found multiple subarrays with sum 0
      count += prefix_sums[sum];
    }

    // Update the count for the current prefix sum
    prefix_sums[sum]++;
  }
return count;
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
        cin>>n; //input size of array
       
        vector<long long int> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}
// } Driver Code Ends