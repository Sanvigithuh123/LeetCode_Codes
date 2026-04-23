class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        a=int(num**0.5)
        return a*a==num
