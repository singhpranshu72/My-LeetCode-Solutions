class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& in) {
         int n=in.size();
        sort(begin(in),end(in));
        int prev=0;
        int ans=0;
        for(int curr=1;curr<n;curr++){
            //overlapping
            //  [1 , 5]  [3 , 6]  here 1,5 is previous and 3,6 is current here we delete 2nd one i.e 3,6
            if(in[curr][0]<in[prev][1]){
                ans++;
                if(in[curr][1]<=in[prev][1]){//jb pura ka pura submerge or overlap  ho jaega eg.[1 5][2 3]
                    prev=curr;//in this case we will delete the greater one ie.First -->[1 5] thats why prev will come to current  and we will proceed further
                }
            }
            else
                prev=curr;
        }
        return ans;
    }
};