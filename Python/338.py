class Solution(object):
    def countBits(self, num):
        """
        :type num: int
        :rtype: List[int]
        """
        ans=[0]
        for n in range(1,num+1):
            ans.append(ans[n//2]+n%2)
        return ans

obj=Solution()
print(obj.countBits(0))

