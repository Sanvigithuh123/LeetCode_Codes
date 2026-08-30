class Solution:
    def minimumDeletions(self, nums: List[int]) -> int:
        n=len(nums)
        minindex=nums.index(min(nums))
        maxindex=nums.index(max(nums))
        left=min(minindex,maxindex)
        right=max(minindex,maxindex)
        op1=right+1
        op2=n-left
        op3=left+1+n-right
        return min(op1,op2,op3)
