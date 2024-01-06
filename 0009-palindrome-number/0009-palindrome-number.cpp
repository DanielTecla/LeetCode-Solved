class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x < 0) return false;

        long long res = 0;
        long long x_ = x;
        
        while(x_ != 0){
            int temp = x_%10;
            x_ /= 10;
            res = res*10 + temp;
        }
        
        return x == res ? true:false;
    }
};