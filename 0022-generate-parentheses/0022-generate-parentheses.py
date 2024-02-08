class Solution:
    def dp(self, s: string, element: string, numL: int, numR: int, n: int):
        list = []
        s += element
        if (numL == numR) and (numL == n):
            return [s]

        if(numL < n):
            list += self.dp(s,'(',numL + 1,numR, n)
        if numR < numL :
            list += self.dp(s,')', numL , numR + 1, n)
        
        return list

    def generateParenthesis(self, n: int) -> List[str]:
        return self.dp("",'(', 1 , 0, n)
        