class Solution:
    def arithmeticTriplets(self, nums: List[int], diff: int) -> int:
        count=0
        for i in range(len(nums)):
            for j in range(i+1,len(nums)):
                for k in range(j+1,len(nums)):
                    a=[]
                    a.append(nums[i])
                    a.append(nums[j])
                    a.append(nums[k])
                    if a[1]-a[0]==diff and a[2]-a[1]==diff:
                        count+=1
        return count
        
