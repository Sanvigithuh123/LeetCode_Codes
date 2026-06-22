class Solution:
    def balancedStringSplit(self, s: str) -> int:
        bal=0
        count=0
        for i in range(len(s)):
            if s[i]=='L':
                bal=bal+1
            if s[i]=='R':
                bal=bal-1
            if bal==0:
                count=count+1
        return count

        
