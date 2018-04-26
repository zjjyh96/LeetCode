class Solution:
    def countSegments(self, s):
        """
        :type s: str
        :rtype: int
        """
        length=len(s)
        ans=0

        if s=='':
            return 0

        # find the last non-space char
        j=length-1
        while j>=0 and s[j]==' ':
            j-=1

        if j==-1:
            return 0

        # count the spaces
        for i in range(j):
            if s[i]!=' ' and s[i+1]==' ':
                ans+=1
        ans+=1
        return ans


obj=Solution()
print(obj.countSegments(""))

