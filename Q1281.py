class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        sum=0
        prod=1
        while n>0:
            dig=n%10
            sum=sum+dig
            prod=prod*dig
            n=n//10
            
        return prod-sum
        
