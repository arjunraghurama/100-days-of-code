# https://leetcode.com/problems/maximum-69-number/

class Solution(object):
    def maximum69Number (self, num):
        """
        :type num: int
        :rtype: int
        """
        s = str(num)
        l = []
        isFirst = False
        for i in range(len(s)):
            if s[i] == '6':
                if not isFirst:
                    l.append('9')
                    isFirst = True
                else:
                    l.append(s[i])
            else:
                l.append(s[i])
                
        return int("".join(l))
