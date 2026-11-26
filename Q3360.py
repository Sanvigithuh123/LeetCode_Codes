class Solution:
    def canAliceWin(self, n: int) -> bool:
        sum=10
        turn=True
        while n>=sum:
                n=n-sum
                sum-=1
                turn=not turn
        return not turn


        
