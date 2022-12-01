//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            String S[] = read.readLine().split(" ");
            Solution ob = new Solution();
            System.out.println(
                ob.isItPossible(S[0], S[1], S[0].length(), S[1].length()));
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {
    int isItPossible(String S, String T, int M, int N) {
        
        StringBuilder sb1 = new StringBuilder();
        StringBuilder sb2 = new StringBuilder();
        
        
        for(char c : S.toCharArray()){
            if(c != '#'){
                sb1.append(c);
            }
        }
        
        for(char c : T.toCharArray()){
            if(c != '#'){
                sb2.append(c);
            }
        }
        
        
        return sb1.toString().equals(sb2.toString()) ? 1 : 0;
    }
};