class Solution:
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        digits.reverse()
        length=len(digits)
        digits.append(0)
        digits[0]+=1
        for i in range(length):
            if digits[i]>=10:
                digits[i]-=10
                digits[i+1]+=1
        if digits[length]==0:
            digits.pop()
        digits.reverse()
        return digits

