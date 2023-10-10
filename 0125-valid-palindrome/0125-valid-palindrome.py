class Solution:
    def isPalindrome(self, s: str) -> bool:
        p2 = len(s) - 1
        p1 = 0
        while(p1<p2):
            while((s[p1].isalnum()) == False and p1<p2):
                p1 += 1
            while((s[p2].isalnum()) == False and p1<p2):
                p2 -= 1
            if(s[p1].lower()!=s[p2].lower()):
                return False
            p1 += 1
            p2 -= 1
        return True
    '''
    race a car
    |        |

    '''