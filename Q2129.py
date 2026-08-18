class Solution:
    def capitalizeTitle(self, title: str) -> str:
        a=title.split()
        for i in range(len(a)):
            if len(a[i])==1 or len(a[i])==2:
                a[i]=a[i].lower()
            else:
                a[i]=a[i].capitalize()
        res=" ".join(a)
        return res
        
