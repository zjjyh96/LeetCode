class Solution:
    def canJump(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        length = len(nums)
        flag = [1] + [0] * (length-1)
        i=0
        while flag[i]==1 and i<length-1:
            if i==0 or nums[i]>=nums[i-1]:
                for j in range(i,min(i+nums[i],length-1)+1):
                    flag[j]=1
            i+=1

        # print flag

        if flag[length-1]==0:
            return False
        else:
            return True

obj=Solution()
print obj.canJump([2,3,1,1,4])



