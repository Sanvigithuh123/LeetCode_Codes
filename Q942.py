class Solution:
    def diStringMatch(self, s: str) -> List[int]:
        a=[]
        low=0
        high=len(s)
        for i in s:
            if i=='I':
                a.append(low)
                low=low+1
            if i=='D':
                a.append(high)
                high=high-1
        a.append(low)
        return a
