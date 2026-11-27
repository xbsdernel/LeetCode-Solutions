class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        answer = []
        new_dict = dict()
        for word in strs:
            key = tuple(sorted(word))
            if new_dict.get(key) is None:
                new_dict[key] = [word]
            else:
                new_dict[key].append(word)
        
        for key, values in new_dict.items():
            answer.append(values) 
            
        return answer
        