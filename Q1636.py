class Solution:
    def frequencySort(self, nums: list[int]) -> list[int]:
        freq={}
        for i in nums:
            freq[i]=freq.get(i,0)+1

        res={}
        for i,j in freq.items():
            if j not in res:
                res[j]=[]
            res[j].append(i)
        ans=[]
        for i in sorted(res):
            for j in sorted(res[i],reverse=True):
                ans.extend([j]*i)
        return ans
        
