class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        merged_list = self.merge(nums1, nums2)
        return self.findMedian(merged_list)

    @staticmethod
    def merge(nums1, nums2):
        final_list = []

        if len(nums1) == 0:
            return nums2
        elif len(nums2) == 0:
            return nums1
        elif len(nums1) >= len(nums2):
            numx = nums1
            numy = nums2
        else:
            numx = nums2
            numy = nums1


        flag_x = numx[-1] - numx[0] >= 0  # numx sorted by normal order
        flag_y = numy[-1] - numy[0] >= 0  # numx sorted by normal order

        direction = int(not flag_x ^ flag_y) or -1

        for index, num in enumerate(numx):
            try:
                num2 = numy[index * direction]
            except IndexError:
                if numx[index] < final_list[-1]:
                    tmp = final_list.pop()
                    final_list.append(numx[index])
                    final_list.append(tmp)
                    final_list.extend(numx[index+1::])
                else:
                    final_list.extend(numx[index::])
                return final_list

            if num < num2:
                if len(final_list) == 0:
                    final_list.append(num)
                    final_list.append(num2)
                elif num < final_list[-1]:
                    tmp = final_list.pop()
                    final_list.append(num)
                    final_list.append(tmp)
                    final_list.append(num2)
                else:
                    final_list.append(num)
                    final_list.append(num2)
            else:
                if len(final_list) == 0:
                    final_list.append(num2)
                    final_list.append(num)
                elif num2 < final_list[-1]:
                    tmp = final_list.pop()
                    final_list.append(num2)
                    final_list.append(tmp)
                    final_list.append(num)
                else:
                    final_list.append(num2)
                    final_list.append(num)
        return final_list

    @staticmethod
    def findMedian(nums):
        length = len(nums)
        if length % 2 == 0:
            return (float(nums[length/2]) + float(nums[length/2-1]))/2
        else:
            return float(nums[length/2])
