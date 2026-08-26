class Solution:
    def threeConsecutiveOdds(self, arr: List[int]) -> bool:
        for i in range(len(arr)-2):
            flag=0
            a=arr[i:i+3]
            for j in a:
                if j%2!=0:
                    flag=1
                    continue
                else:
                    flag=0
                    break
            if flag==1:
                return True
        return False
            
        
