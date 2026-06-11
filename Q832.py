class Solution:
    def flipAndInvertImage(self, image: List[List[int]]) -> List[List[int]]:
        a=[]
        for i in image:
            rever=i[::-1]
            for j in range(len(rever)):
                if rever[j]==0:
                    rever[j]=1
                else:
                    rever[j]=0
            a.append(rever)
        return a

        
