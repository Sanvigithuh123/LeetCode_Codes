class Solution:
    def findNumbers(self, nums: list[int]) -> int:
        ans=0
        for i in nums:
            a=len(str(abs(i)))
            if a%2==0:
                ans+=1
        return ans
        
