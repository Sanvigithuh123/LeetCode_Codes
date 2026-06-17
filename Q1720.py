class Solution:
    def decode(self, encoded: List[int], first: int) -> List[int]:
        a=[]
        a.append(first)
        j=0
        for i in range(len(encoded)):
            res=a[j]^encoded[i]
            a.append(res)
            j=j+1
        return a
