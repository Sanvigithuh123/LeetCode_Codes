class Solution:
    def minElement(self, nums: List[int]) -> int:
        a=[]
        for i in nums:
            dig=sum(int(num) for num in str(i))
            a.append(dig)
        return min(a)
        
