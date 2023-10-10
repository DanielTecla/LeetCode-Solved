class Solution {
public:
    bool isPalindrome(string s) {
        for(int p1=0, p2=s.size()-1;p1<p2;p1++,p2--){
            while(isalnum(s[p1])==false && p1<p2){
                p1++;
            }
            while(isalnum(s[p2])==false && p1<p2){
                p2--;
            }
            if(tolower(s[p1])!=tolower(s[p2])) return false;
        }
        return true;
    }
};