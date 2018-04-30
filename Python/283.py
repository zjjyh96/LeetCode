class Solution:
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: void Do not return anything, modify nums in-place instead.
        """

        # length=len(nums)
        # for i in range(length):
        #     # find the closest xero
        #     while i<length and nums[i]!=0:
        #         i+=1
        #     j=i+1
        #     # find the next non-zero number
        #     while j<length and nums[j]==0:
        #         j+=1
        #     # switch position
        #     if i<length and j<length:
        #         nums[i],nums[j]=nums[j],nums[i]

        length=len(nums)
        idx=0
        while idx<length and nums[idx]!=0:
            idx+=1
        for i in range(idx,length):
            if nums[i]!=0:
                nums[i], nums[idx] = nums[idx], nums[i]
                idx+=1

obj=Solution()
nums=[1,2,0,3,4,0]
obj.moveZeroes(nums)
print(nums)
