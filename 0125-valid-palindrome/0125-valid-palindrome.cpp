class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> new_s;
        for(auto &l:s){
            l = tolower(l);
            if(l>=97 && l<=122 || l>=48 && l<=57)
                new_s.push_back(l);
        } 
        int n,p2=new_s.size();
        n = p2/2;
        if(p2%2!=0)
            n++;
        p2--;
        for(int p1=0;p1<n;p1++){
            if(new_s[p1]!=new_s[p2-p1])
                return false;
        }
        
        return true;
    }
};