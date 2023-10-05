class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        m = len(nums1)
        n = len(nums2)
        m1 = m
        n1 = n
        mid = (n+m)/2
        mid = int(mid)
        temp_list = []
        i = 0
        while i <= mid and m > 0 and n > 0:
            if nums1[0] > nums2[0]:
                temp_list.append(nums2[0])
                nums2.pop(0)
                n -= 1
            else:
                temp_list.append(nums1[0])
                nums1.pop(0)
                m -= 1
            i += 1

        
        while m > 0 and i <= mid:
            temp_list.append(nums1[0])
            nums1.pop(0)            
            i += 1
            m -= 1
        
        while n > 0 and i <= mid:
            temp_list.append(nums2[0])
            nums2.pop(0)
            i += 1
            n += 1
        i -= 1

        if (m1+n1)%2 == 0:
            rtype = (temp_list[i]+temp_list[i-1])/2.0
        else:
            rtype = temp_list[i] 
        
        return rtype