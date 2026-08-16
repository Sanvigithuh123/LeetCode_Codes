class Solution:
    def dominantIndex(self, nums: List[int]) -> int:
        a=sorted(nums)
        large=a[-1]
        for i in range(len(a)-1):
            if a[i]*2<=large:
                continue
            else:
                return -1
        
        return nums.index(large)
