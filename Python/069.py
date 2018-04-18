class Solution:
    def mySqrt(self, x):
        """
        :type x: int
        :rtype: int
        """
        ans=0
        left=0
        right=x
        if x==0:
            return 0
        if x==1:
            return 1
        while (right-left)!=1:
            mid = (left + right) // 2
            if mid * mid <= x:
                left = mid
            else:
                right = mid

        return left

obj=Solution()
print obj.mySqrt(0)

