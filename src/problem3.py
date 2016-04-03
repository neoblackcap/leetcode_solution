#!/bin/env python

class Solution:
    # @param {string} s
    # @return {integer}
    def lengthOfLongestSubstring(self, s):
        ht = {}
        ptr1 = 0
        ptr2 = 0
        result = 0
        while ptr2 <= len(s) - 1:
            if ptr1 == ptr2:
                ht.update({s[ptr2]: str(ptr2)})
                ptr2 += 1
                tmp = 1
                result = result if tmp <= result else tmp
            elif not ht.get(s[ptr2]):
                ht.update({s[ptr2]: str(ptr2)})
                ptr2 += 1
                tmp += 1
                result = result if tmp <= result else tmp
            else:
                key = int(ht.get(s[ptr2])) + 1
                gap = key - ptr1
                for i in range(ptr1, int(ht.get(s[ptr2])) + 1):
                    del ht[s[i]]
                tmp -= gap
                ptr1 = key
        return result


if __name__ == '__main__':
    s = 'aa'
    answer = 1
    try:
        assert Solution().lengthOfLongestSubstring(s) == answer
    except AssertionError:
        print(Solution().lengthOfLongestSubstring(s))
