class Solution {
public:
    void allCombinations(string digits,vector<string> &ans,map<char,string> &pNumbers,int i,
    string &temp){
        if(i == digits.length()) ans.push_back(temp);
        else{
            for(int j=0;j<pNumbers[digits[i]].length();j++){
                temp += pNumbers[digits[i]][j];
                allCombinations(digits,ans,pNumbers,i+1,temp);
                temp.pop_back();
            }
        }
    } 

    vector<string> letterCombinations(string digits) {
        map<char,string> pNumbers = {{'2',"abc"},
        {'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},
        {'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};

        if(digits.empty()) return {};

        vector<string> ans;
        //init i in 0
        string temp;
        allCombinations(digits,ans,pNumbers,0,temp);
        return ans;
    }
};