class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        if ch not in word:
            return word
        s=""
        for i in word:
            s=s+i
            if i==ch:
                break
        s=s[::-1]
        s=s+word[len(s):]
        return s        
