class MyCalendarTwo {
public:
    
    map<int,int>mp;
    
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {
           mp[start]++;  // map me start wali ki jagah 1 map krenge
        mp[end]--;  //  end wali jagah -1 map krenge
        int sum=0;
        for(auto it:mp)
        {
            sum+=it.second;  // to sum = +1 -1 , 0 aayega to no intersection 
            if(sum>2)   // 1 se bda aaya sum to bich me kch na kch value aa gyi hai so intersection 
            {
                mp[start]--;  // so map se vo interval ko remove krenge start aur end ko
                mp[end]++;   // +1-1=0  //start   // -1+1=0 // end;
                return false;
            }
        }
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */