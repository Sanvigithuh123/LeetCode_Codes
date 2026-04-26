class Solution:
    def isPowerOfThree(self, n: int) -> bool:
        if n<=0:
            return False
        if n==1:
            return True
        prod=1
        while prod<n:
            prod=prod*3
        if prod==n:
            return True
        else:
            return False
