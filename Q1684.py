class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        count=0
        for i in words:
            res=""
            for j in i:
                if j not in allowed:
                    res+=j
            if len(res)==0:
                count+=1
        return count

        
