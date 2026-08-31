class Solution:
    def sumBase(self, n: int, k: int) -> int:
        import numpy as np
        a=np.base_repr(n,base=k)
        res=0
        for i in a:
            res+=int(i)
        return res
        
