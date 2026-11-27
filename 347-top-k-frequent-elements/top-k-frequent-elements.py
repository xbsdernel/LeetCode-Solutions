class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        new_dict = dict()
        answer = list()

        for num in nums:
            if num in new_dict:
                new_dict[num] += 1
            else:
                new_dict[num] = 1
        
        while k != 0:
            max_num  = max(new_dict, key=new_dict.get)
            answer.append(max_num)
            del new_dict[max_num]
            k -= 1
        
        return answer
        