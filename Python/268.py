class Solution:
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n=len(nums)
        # ans=n*(n+1)/2
        # for i in range(n):
        #     ans=ans-nums[i]
        # return int(ans)

        return int((n+1)*n/2-sum(nums))
