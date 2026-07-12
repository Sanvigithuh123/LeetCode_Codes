class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:
        if not arr:
            return []
        a={}
        c=sorted(arr)
        count=1
        a[c[0]]=count
        for i in range(1,len(c)):
            if c[i]!=c[i-1]:
                count+=1
            a[c[i]]=count
        
        return [a[j] for j in arr]
        
