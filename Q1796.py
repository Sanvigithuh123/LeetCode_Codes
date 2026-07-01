class Solution:
    def secondHighest(self, s: str) -> int:
        a=[]
        for i in s:
            if i.isdigit():
                a.append(int(i))
        
        b=sorted(set(a))
        if len(b)==1 or len(b)==0:
            return -1
        else:
            return b[-2]
        
