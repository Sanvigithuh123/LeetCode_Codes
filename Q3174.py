class Solution:
    def clearDigits(self, s: str) -> str:
        top=-1
        stack=[]
        for i in s:
            if i.isdigit():
                if top>-1:
                    stack.pop()  
            else:
                top=top+1
                stack.append(i)
        return "".join(stack)
