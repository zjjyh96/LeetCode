class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        right=len(nums)-1
        left=0
        if len(nums)==0:
            return -1
        while left<right:
            mid=int((left+right)/2)
            if nums[mid]==target:
                return mid
            if nums[left]<=nums[mid]:
                if nums[left] <= target < nums[mid]:
                    right=mid-1
                else:
                    left=mid+1
            else:
                if nums[mid] < target <= nums[right]:
                    left=mid+1
                else:
                    right=mid-1
        if nums[left] == target:
            return left
        else:
            return -1

obj=Solution()

print(obj.search([3,1],1))







