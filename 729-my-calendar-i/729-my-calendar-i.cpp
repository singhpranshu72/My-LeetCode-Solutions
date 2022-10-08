class MyCalendar {
public:
   vector<pair<int,int>>v;
   
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
       for (auto [s,e]:v)
            if (max(s, start) < min(e, end)) return false;
        //to be non overlapping maxof starts>min ends  kyuki tbhi ek strt chalu hoga jb usse phle ending ho chuki  h min(ends) will give earliest time when pre events ended.
        
        v.push_back({start, end});
        return true;
        
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */