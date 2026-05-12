class Solution:
    def separateDigits(self, nums: List[int]) -> List[int]:
        a=''.join(map(str,nums))
        lst=list(map(int,a))
        return lst
