
'''
LeetCode 27. Remove Element
Created by Yinhao Jiang on 2018/5/10.
'''


class Solution:
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        length=len(nums)
        p=0
        for i in range(length):
            if nums[i]!=val:
                nums[p]=nums[i]
                p+=1
        return p
