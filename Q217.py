class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        a=list(set(nums))

        return len(a)<len(nums)
