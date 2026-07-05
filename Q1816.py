class Solution:
    def truncateSentence(self, s: str, k: int) -> str:
        a=s.split()
        if len(s)<=k:
            return s
        b=[]
        for i in range(k):
            b.append(a[i])
        return " ".join(b)

        
