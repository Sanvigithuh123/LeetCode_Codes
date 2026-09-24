class Solution:
    def smallestIndex(self, nums: List[int]) -> int:
        for i in range(len(nums)):
            a=list(map(int,str(nums[i])))
            if i==sum(a):
                return i
        return -1

        
