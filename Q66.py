class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        sum=int("".join(map(str,digits)))
        sum=sum+1
        n=len(str(abs(sum)))
        a=[]
        for i in range(n):
            dig=sum%10
            a.append(dig)
            sum=sum//10
        res=a.reverse()
        return a
        
