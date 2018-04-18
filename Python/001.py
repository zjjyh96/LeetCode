class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """

        # # Solution 1:
        # x=0
        # y=0
        # for i in range(len(nums)-1):
        #     for j in range(i+1,len(nums)):
        #         if nums[i]+nums[j]==target:
        #             x=i
        #             y=j
        # return x,y

        # # Solution 2:
        #
        # # set hash table
        # dictn={}
        # for i in range(len(nums)):
        #     dictn[nums[i]]=i
        #
        # # find 2sum numbers
        # arr=sorted(nums)
        # left=0
        # right=len(arr)-1
        # sum=arr[left]+arr[right]
        # while sum!=target and left<right:
        #     if sum<target:
        #         left+=1
        #     else:
        #         right-=1
        #     sum = arr[left] + arr[right]
        #
        # # find original index
        # if dictn[arr[left]]!=dictn[arr[right]]:
        #     return dictn[arr[left]],dictn[arr[right]]
        # else:
        #     ans=[]
        #     for i in range(len(nums)):
        #         if nums[i]==target/2:
        #             ans.append(i)
        #     return ans

        # Solution 3:

        if len(nums) <= 1:
            return False
        dictn={}
        for i in range(len(nums)):
            if nums[i] in dictn:
                return [dictn[nums[i]], i]
            else:
                complementary = target - nums[i]
                dictn[complementary] = i

obj=Solution()

print(obj.twoSum([3,3],6))


