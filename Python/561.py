class Solution(object):
    def arrayPairSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        # nums.sort()
        # sum=0
        # length=len(nums)
        # for i in range(0,length,2):
        #     sum+=nums[i]
        #
        # return sum

        return sum(sorted(nums)[::2])