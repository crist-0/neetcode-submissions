class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        l,r= 0, len(numbers)-1
        while l < r:
            m = numbers[l] + numbers[r]
            if m == target:
                return [l+1, r+1]
            elif m > target:
                r-=1
            elif m < target:
                l+=1