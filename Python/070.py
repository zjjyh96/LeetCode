class Solution(object):
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        nums=[1,1]
        for i in range(2,n+1):
            nums.append(nums[i-1]+nums[i-2])
        return nums[n]



