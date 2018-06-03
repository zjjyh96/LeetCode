'''
LeetCode 3. Longest Substring Without Repeating Characters
Created by Yinhao Jiang who still loves Freda_Ren on 2018/6/3.
'''


class Solution:
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        char=[]
        left=0
        right=len(s)-1
        maxlen=0
        length=0
        if s=="":
            return 0
        for i in range(len(s)):
            while s[i] in char:
                char.pop(0)
                length-=1
            # if s[i] not in char:
            #     char.append(s[i])
            #     length+=1
            char.append(s[i])
            length += 1
            if length>maxlen:
                maxlen=length
        return maxlen

ans=Solution()
print ans.lengthOfLongestSubstring("bbb")

