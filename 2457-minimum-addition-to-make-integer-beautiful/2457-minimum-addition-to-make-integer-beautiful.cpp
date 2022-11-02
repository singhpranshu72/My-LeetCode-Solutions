class Solution {
public:
    bool fun(long long n, int tar) {
        int sum = 0;
        while(n) {
            sum += (n%10);
            n /= 10;
        }
        return sum <= tar;
    }
    long long makeIntegerBeautiful(long long n, int target) {
        long long sum = 0, k = 10;
        
        while(true) {
            if(fun(n, target)) {
                return sum;
            }
            else {
                long long r = k-(n%k);
                n += r;
                sum += r;
                k *= 10;
            }
        }
        return sum;
    }
};