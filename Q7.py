class Solution:
    def reverse(self, x: int) -> int:
        if x<0:
            a=int(str(abs(x))[::-1])
            if a<-2147483648 or a>2147483647:
                return 0
            else:
                return -a

        else: 
            a=int(str(x)[::-1])
            if a<-2147483648 or a>2147483647:
                return 0
            else:
                return a
        
