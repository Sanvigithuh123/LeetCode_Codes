class Solution:
    def isMonotonic(self, nums: list[int]) -> bool:
        flag1=0
        for i in range(len(nums)-1):
                if nums[i]<=nums[i+1]:
                    continue
                else:
                    flag1=1
                    break
        flag2=0
        for i in range(len(nums)-1):
                if nums[i]>=nums[i+1]:
                    continue
                else:
                    flag2=1
                    break
        if flag1==0 or flag2==0:
            return True
        else:
            return False
