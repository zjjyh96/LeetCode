
'''
LeetCode 49. Group Anagrams
Created by Yinhao Jiang on 2018/5/14.
'''


class Solution:
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        ans = collections.defaultdict(list)
        for a in strs:
            count=[0]*26
            for c in a:
                count[ord(c)-ord('a')]+=1
            ans[tuple(count)].append(a)
        return ans.values()
