class Solution:
    def maxIceCream(self, costs: List[int], coins: int) -> int:
        costs.sort()
        sum=0
        count=0
        for i in costs:
            if sum+i>coins:
                break
            sum=sum+i
            count+=1
        return count

        
