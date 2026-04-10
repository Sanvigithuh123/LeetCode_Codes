class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        
        b=list(set(nums))
        b.sort(reverse=True)
        n=len(b)
        if n<3:
            return b[0]
        else:
            return b[2]        
