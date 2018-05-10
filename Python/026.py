
'''
LeetCode 26. Remove Duplicates from Sorted Array
Created by Yinhao Jiang on 2018/5/10.
'''


class Solution:
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        length=len(nums)
        nums.append('a')
        p=0
        for i in range(length):
            if nums[i]!=nums[i+1]:
                nums[p]=nums[i]
                p+=1
        return p

# obj=Solution()
# nums=[1,1,1,1,1,1,2]
# l = obj.removeDuplicates(nums);
# for i in range(l):
#     print(nums[i])



