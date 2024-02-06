class Solution:
    def maxArea(self, height: List[int]) -> int:
        left = 0
        right = len(height) - 1
        mostWater = 0
        while(left != right):
            mostWater = max(mostWater,(right - left) * min(height[left],height[right]))
            if ( height[left] < height[right]):
                left += 1
            else:
                right -= 1
        return mostWater

