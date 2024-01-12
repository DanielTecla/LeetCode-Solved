class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        for letter in s:
            if letter == ")" or letter == "]" or letter == "}":
                if (
                    len(stack) == 0
                    or (letter == ")" and stack[-1] != "(")
                    or (letter == "]" and stack[-1] != "[")
                    or (letter == "}" and stack[-1] != "{")
                ):
                    return False
                stack.pop()
            else:
                stack.append(letter)

        return False if len(stack) else True
