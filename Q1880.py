class Solution:
    def isSumEqual(self, firstWord: str, secondWord: str, targetWord: str) -> bool:
        firstnum=""
        secondnum=""
        targetnum=""
        for i in firstWord:
            num=ord(i)-ord('a')
            firstnum+=str(num)
        for i in secondWord:
            num=ord(i)-ord('a')
            secondnum+=str(num)
        for i in targetWord:
            num=ord(i)-ord('a')
            targetnum+=str(num)
        if int(firstnum)+int(secondnum)==int(targetnum):
            return True
        else:
            return False
