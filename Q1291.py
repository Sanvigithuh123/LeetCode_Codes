class Solution:
    def sequentialDigits(self, low: int, high: int) -> List[int]:
        a=[]
        
        s="123456789"
        for i in range(len(str(low)),len(str(high))+1):
            for j in range(10-i):
                num=int(s[j:j+i])
                if low<=num<=high:
                    a.append(num)
        return a
            
        
