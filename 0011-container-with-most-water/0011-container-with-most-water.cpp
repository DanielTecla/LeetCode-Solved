class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size()-1;
        int p2 = n, p1, a;
        p1 = a = 0;
        while(p1<p2){
            a = max(a,n*min(height[p1],height[p2]));
            if(height[p1]<height[p2]) p1++;
            else p2--;
            n--;
        }
        return a;
    }
};