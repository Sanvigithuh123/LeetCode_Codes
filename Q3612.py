class Solution:
    def processStr(self, s: str) -> str:
        a=[]
        for i in s:
            if i=='#':
                a=a+a
            elif i=='*':
                if a:
                    a.pop()
            elif i=='%':
                a.reverse()
            else:
                a.append(i)

        return "".join(a)
        
