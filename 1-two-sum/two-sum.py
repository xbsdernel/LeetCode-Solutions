class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        # solution using hash map
        new_dict = dict()
        for idx in range(len(nums)):
            complement = target - nums[idx]
            if new_dict.get(complement) is not None:
                return [idx, new_dict[complement]]
            new_dict[nums[idx]] = idx
        