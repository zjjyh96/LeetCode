class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        length=len(nums)
        left=[nums[0]]
        right=[nums[length-1]]
        for i in range(1,length):
            left.append(left[i-1]*nums[i])
        for i in range(1,length):
            right.append(right[i-1]*nums[length-i-1])
        right.reverse()
        ans=[right[1]]
        for i in range(1,length-1):
            ans.append(left[i-1]*right[i+1])
        ans.append(left[length-2])
        return ans

obj=Solution()
nums = [1,2,3,4]
print(obj.productExceptSelf(nums))

