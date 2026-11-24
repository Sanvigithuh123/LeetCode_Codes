class Solution:
    def findLengthOfLCIS(self, nums: list[int]) -> int:
        a1=[]
        maxlen=1
        a1.append(nums[0])
        new=0
        for i in range(1,len(nums)):
            if nums[i]>nums[i-1]:
                a1.append(nums[i])
            else:
                maxlen=max(maxlen,len(a1))
                a1=[nums[i]]
        maxlen=max(maxlen,len(a1))
       
        return maxlen

        
