class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        maxi=[]
        for i in sentences:
            a=i.split()
            maxi.append(len(a))
        return max(maxi)
        
