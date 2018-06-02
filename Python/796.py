
'''
LeetCode 796. Rotate String
Created by Yinhao Jiang who loves Freda_Ren on 2018/6/2.
'''


class Solution(object):
    def rotateString(self, A, B):
        """
        :type A: str
        :type B: str
        :rtype: bool
        """
        A = list(A)
        if len(A) == len(B) == 0:
            return True
        for i in range(0, len(A)):
            tmp = A[0]
            A.pop(0)
            A.append(tmp)
            rev = ''.join(A)
            if rev == B:
                return True

        return False

ans=Solution()
print ans.rotateString("vcuszhlbtpmksjleuchmjffufrwpiddgyynfujnqblngzoogzg","fufrwpiddgyynfujnqblngzoogzgvcuszhlbtpmksjleuchmjf")
