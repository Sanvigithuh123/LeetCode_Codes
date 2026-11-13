class Solution:
    def bitwiseComplement(self, n: int) -> int:
        a=bin(n)
        b=list(a[2:])
        for i in range(len(b)):
            if b[i]=='1':
                b[i]='0'
            else:
                b[i]='1'
        c="".join(b)
        return int(c,2)
        
