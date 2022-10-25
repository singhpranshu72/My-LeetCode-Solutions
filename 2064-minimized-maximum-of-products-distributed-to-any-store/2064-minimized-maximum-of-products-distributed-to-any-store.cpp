class Solution {
public:
    int bsb(vector<int>& quantities,int mid){
        int s=0;
        for(int i=0;i<quantities.size();i++){
            s+=(quantities[i]+mid-1)/mid;//taking ceil value A[i]/mid
        }
        return s;
    }
    int minimizedMaximum(int n, vector<int>& quantities) {
        int l=1,h=1000000;
        while(l<h){
            int mid=(l+h)/2;
            int c=bsb(quantities,mid);//If we have enough stores,mid is big enough.

        if(c>n){
            l=mid+1;
        }
            else
                h=mid;
        }
        return l;
    }
};