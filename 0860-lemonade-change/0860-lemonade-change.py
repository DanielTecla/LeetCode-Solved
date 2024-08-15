class Solution:
    def lemonadeChange(self, bills: List[int]) -> bool:
        if bills[0] != 5:
            return False
        
        five_dls = 0
        ten_dls = 0

        for i in bills:
            if i == 5:
                five_dls += 1

            elif i == 10:
                
                if five_dls > 0:
                    five_dls -= 1
                else:
                    return False
                ten_dls += 1
            
            else:
                
                if five_dls > 0 and ten_dls > 0:
                    five_dls -= 1
                    ten_dls -= 1
                elif five_dls > 2:
                    five_dls -= 3
                else:
                    return False

        return True

