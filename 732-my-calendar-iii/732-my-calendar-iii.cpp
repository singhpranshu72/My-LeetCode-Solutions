class MyCalendarThree {
public:
    map<int,int>mp;
    
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        mp[start]++;
        mp[end]--;
        int sum=0,k=0;
        for(auto it:mp)
        {
            sum+=it.second;
            k=max(k,sum); // maximum overllaping interval ko store krenge k me
        }
       return k; 
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */