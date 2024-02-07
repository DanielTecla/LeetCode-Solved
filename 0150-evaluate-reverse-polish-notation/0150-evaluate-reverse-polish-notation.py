class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        res = 0
        
        for token in tokens:
            if not(len(token) > 1) and not(token.isdigit()):
                if token == '+':
                    res = stack.pop(-1) + stack.pop(-1)
                elif token == '-':
                    res = - stack.pop(-1) + stack.pop(-1)
                elif token == '*':
                    res = stack.pop(-1) * stack.pop(-1)
                else:
                    res = int(stack.pop(-2) / stack.pop(-1))
                stack.append(res)
            else:
                stack.append(int(token))

        return stack[-1]