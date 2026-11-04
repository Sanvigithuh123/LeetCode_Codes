class Solution:
    def subsetXORSum(self, nums: list[int]) -> int:
        subsets=[]
        for i in nums:
            new=[i]
            for j in subsets:
                new.append(j^i)
            subsets+=new
        return sum(subsets)        
