class Solution:
    def createTargetArray(self, nums: List[int], index: List[int]) -> List[int]:
        a=[]
        for i,n in zip(index,nums):
            a.insert(i,n)

        return a
        
