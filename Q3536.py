class Solution:
    def maxProduct(self, n: int) -> int:
        a=list(map(int, str(n)))
        max=0
        for i in range(len(a)):
            for j in range(i+1,len(a)):
                prod=a[i]*a[j]
                if prod>max:
                    max=prod
        return max

        
