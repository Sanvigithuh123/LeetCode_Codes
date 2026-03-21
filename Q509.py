class Solution:
    def fib(self, n: int) -> int:
        if n==0:
            return 0
        if n==1:
            return 1
        else:
            first=0
            second=1
            for i in range(1,n):
                next=first+second
                first=second
                second=next
            return next


        
