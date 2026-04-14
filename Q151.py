class Solution:
    def reverseWords(self, s: str) -> str:
        a=list(map(str,s.split()))
        b=a[::-1]
        
        return " ".join([str(x) for x in b])
        
