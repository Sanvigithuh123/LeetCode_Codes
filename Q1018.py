class Solution:
    def prefixesDivBy5(self, nums: list[int]) -> list[bool]:
        ans=[]
        a=0
        for i in nums:
            a=a*2+i
           
            if a%5==0:
                ans.append(True)
            else:
                ans.append(False)
        return ans

        
