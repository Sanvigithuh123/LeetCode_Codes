class Solution:
    def countDaysTogether(self, arriveAlice: str, leaveAlice: str, arriveBob: str, leaveBob: str) -> int:
        days=[31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
        def convert(date):
            month=int(date[:2])
            day=int(date[3:])
            total=day
            for i in range(month-1):
                total+=days[i]
            return total
        alicestart=convert(arriveAlice)
        aliceend=convert(leaveAlice)
        bobstart=convert(arriveBob)
        bobend=convert(leaveBob)
        start=max(alicestart,bobstart)
        end=min(aliceend,bobend)
        if start>end:
            return 0
        return end-start+1
        
        
