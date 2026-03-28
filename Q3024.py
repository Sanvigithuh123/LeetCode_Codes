class Solution:
    def triangleType(self, nums: List[int]) -> str:
        a,b,c=nums[0],nums[1],nums[2]
        if a+b>c and b+c>a and a+c>b:
            if a==b and b==c:
                return "equilateral"
            elif a==b or b==c or c==a:
                return "isosceles"
            else:
                return "scalene"
        else:
            return "none"
