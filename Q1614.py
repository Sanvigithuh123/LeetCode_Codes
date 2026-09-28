class Solution:
    def maxDepth(self, s: str) -> int:
        depth=0
        maxi=0
        for i in s:
            if i=="(":
                depth+=1
                maxi=max(depth,maxi)
            if i==")":
                depth-=1
        return maxi
        
