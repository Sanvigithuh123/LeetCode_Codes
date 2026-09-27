class Solution:
    def convertTemperature(self, celsius: float) -> list[float]:
        nums=[]
        nums.append(celsius+273.15)
        nums.append(celsius*1.80+32.00)
        return nums
        
