class Solution:
    def uniquePaths(self, m, n):
        """
        :type m: int
        :type n: int
        :rtype: int
        """
        x=m-1
        y=n-1
        combi=1
        for i in range(y+1,x+y+1):
            combi*=i
        for i in range(1,x+1):
            combi/=i

        return int(combi)

obj=Solution()
print obj.uniquePaths(53,4)