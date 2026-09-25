class Solution:
    def maxPower(self, s: str) -> int:
        max=0
        for i in range(len(s)):
            count=1
            for j in range(i+1,len(s)):
                if s[j]==s[i]:
                    count+=1
                else:
                    break
            if count>max:
                max=count
        return max
            
        
