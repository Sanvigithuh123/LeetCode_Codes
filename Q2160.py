class Solution:
    def minimumSum(self, num: int) -> int:
        a=sorted(map(int,str(num)))
        num1=a[0]*10+a[2]
        num2=a[1]*10+a[3]
        return num1+num2
        
