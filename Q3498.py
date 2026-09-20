class Solution:
    def reverseDegree(self, s: str) -> int:
        ans=0
        for i,ch in enumerate(s,1):
            val=26-(ord(ch)-ord('a'))
            ans=ans+val*i
        return ans

        
