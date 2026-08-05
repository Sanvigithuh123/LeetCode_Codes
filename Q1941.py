class Solution:
    def areOccurrencesEqual(self, s: str) -> bool:
        a=[s.count(i) for i in set(s)]
        return len(set(a))==1
        
        
