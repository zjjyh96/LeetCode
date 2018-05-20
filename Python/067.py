
'''
LeetCode 67. Add Binary
Created by Yinhao Jiang on 2018/5/20.
'''


class Solution:
    def addBinary(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """
        # a = a[::-1]
        # b = b[::-1]
        # if len(a)>len(b):
        #     long=a
        #     short=b
        # else:
        #     long=b
        #     short=a
        # i=0
        # j=0
        # flag=0
        # for i in range(len(short)):
        #     if long[i] == '1' and short[i] == '1' and flag == 0:
        #         flag=1
        #         long[i]='0'
        #     elif long[i] == '1' and short[i] == '1' and flag == 1:
        #         flag=1
        #         long[i]='1'
        #     elif long[i] == '1' and short[i] == '0' and flag == 0:
        #         flag=0
        #         long[i]='1'
        #     elif long[i] == '1' and short[i] == '0' and flag == 1:
        #         flag = 1
        #         long[i] = '0'
        #     elif long[i] == '0' and short[i] == '1' and flag == 0:
        #         flag = 0
        #         long[i] = '1'
        #     elif long[i] == '0' and short[i] == '1' and flag == 1:
        #         flag = 1
        #         long[i] = '0'
        #     elif long[i] == '0' and short[i] == '0' and flag == 0:
        #         flag = 0
        #         long[i] = '0'
        #     elif long[i] == '0' and short[i] == '0' and flag == 1:
        #         flag = 0
        #         long[i] = '1'
        # for i in range(len(short),len(long)):
        #     if long[i]=='1' and flag==1:
        #         flag=1
        #         long[i]='0'
        #     elif long[i]=='0' and flag==1:
        #         flag=0
        #         long[i]='1'
        #     elif long[i]=='1' and flag==0:
        #         flag=0
        #         long[i]='1'
        #     elif long[i]=='0' and flag==0:
        #         flag=0
        #         long[i]='0'
        # if flag==1:
        #     long.append('1')
        # long[::-1]
        # return long

        return str(bin(int(a, 2) + int(b, 2)))[2:]

obj=Solution()
print obj.addBinary("111","111")






