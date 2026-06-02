class Solution:
    def calPoints(self, operations: List[str]) -> int:
        def is_number(text):
            try:
                float(text)
                return True
            except ValueError:
                return False
        a=[]
        for i in operations:
            if is_number(i):
                a.append(int(i))
            if i=='+':
                s=a[-1]+a[-2]
                a.append(s)
            if i=='D':
                prod=a[-1]*2
                a.append(prod)
            if i=='C':
                a.pop()
        
        return sum(a)
        
