class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        a=[]
        for i in stones:
            if i in jewels:
                a.append(i)
        return len(a)

        
