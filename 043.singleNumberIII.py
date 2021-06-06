/*
# https://leetcode.com/problems/single-number-iii/
# Input: nums = [1,2,1,3,2,5]
# Output: [3,5]
# Explanation:  [5, 3] is also a valid answer.

*/

class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        already_seen_nums = {}
        results = []
        for num in nums:
            if num not in already_seen_nums:
                already_seen_nums[num]=True
            else:
                already_seen_nums[num]=False
        
        return [num for num in nums if already_seen_nums[num]]
