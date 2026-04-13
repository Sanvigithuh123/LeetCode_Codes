class Solution:
    def numberOfEmployeesWhoMetTarget(self, hours: List[int], target: int) -> int:
        x=[i for i in hours if i>=target]
        return len(x)
