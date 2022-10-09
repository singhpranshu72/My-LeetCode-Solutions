class Solution {
public:
     char low(vector<int> & freq){    // this function return the smallest char present
        
        for(int i=0;i<26;i++){
            if(freq[i]!=0)return 'a'+i;
        } 
        return 'a';   
    }
    string robotWithString(string s) {
          stack<char> t;
        string ans="";  
        vector<int> freq(26,0);
        for(char c:s){
            freq[c-'a']++;
        }
        
        for(char c:s){
            t.push(c);
             freq[c-'a']--; 
            while(t.size()>0 && t.top()<=low(freq)){//just compare with smallest char in string
                char x = t.top(); 
                ans+= x;
                t.pop();  
            }    
        }
        
         while(t.size()>0){
             ans+= t.top();
             t.pop();   
        }
      
        return ans;
    }
};
// Approach
// Just add the frequency of every element to go in lexicographic order. Now add char one by one to the stack , if the lowest lexicgraphic char is greater than equal to element on top of stack , add the top of stack to ans.
// At last if the stack isn't empty after traversing all elements, add all elemrnts to the ans.