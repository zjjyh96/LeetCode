class Solution:
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        # length=len(nums)
        # ans=[]
        # for num in nums:
        #     if not(num in ans):
        #         ans.append(num)
        #     else:
        #         return True
        # return False

        return len(nums) != len(set(nums))
