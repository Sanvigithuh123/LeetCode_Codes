class Solution:
    def maxAscendingSum(self, nums: list[int]) -> int:
        current_max=nums[0]
        global_max=nums[0]
        for i in range(1,len(nums)):
            if nums[i-1]<nums[i]:
                current_max+=nums[i]
            else:
                current_max=nums[i]
            global_max=max(global_max,current_max)
        return global_max
        
