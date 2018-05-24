
'''
LeetCode 190. Reverse Bits
Created by Yinhao Jiang who loves Freda_Ren on 2018/5/24.
'''


class Solution:
    # @param n, an integer
    # @return an integer
    def reverseBits(self, n):
        ans = 0
        for i in xrange(32):
            ans = (ans << 1) + (n & 1)
            n >>= 1
        return ans
