class Solution:
    def decompressRLElist(self, nums: List[int]) -> List[int]:
        a=[]
        for i in range(0,len(nums)-1,2):
            b=[nums[i+1]]*nums[i]
            a=a+b
        return a

        
