class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        sm = {}

        for i in range(len(nums)):
            if target-nums[i] in sm:
                return sorted([i, sm[target-nums[i]]])
            
            sm[nums[i]] = i