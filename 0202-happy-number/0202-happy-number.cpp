class Solution {
public:
    int sumSquareDigits(int num){
        int temp = 0;
        while(num){
            int element = num%10;
            temp += element * element;
            num /= 10;
        }

        return temp;
    }

    bool isHappy(int n) {
        unordered_set<int> mySet;

        while(n != 1){
            n = sumSquareDigits(n);
            cout<<n<<endl;
            if(mySet.count(n) > 0)
                return false;
            mySet.insert(n);
        }

        return true;
    }
};

/*


*/