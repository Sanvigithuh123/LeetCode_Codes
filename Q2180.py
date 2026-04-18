class Solution:
    def countEven(self, num: int) -> int:
        count=0

        for i in range(1,num+1):
            sum=0
            for j in str(i):
                sum=sum+int(j)
                i=i/10
            if sum%2==0:
                count=count+1      
      
        return count
