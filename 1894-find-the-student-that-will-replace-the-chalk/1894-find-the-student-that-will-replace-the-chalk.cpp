class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n=chalk.size();
      long long int p=accumulate(chalk.begin(),chalk.end(),0l);
        k=k%p;
        // while(1){
        //     if(k<p)break;
        //     else
        //         k=k-p;
        // }
        
         for (int i=0;i<n;i++)
        if ((k -= chalk[i]) < 0)
            return i;
   
        
        //cout<<k<<endl;
        return 0;
    }
};