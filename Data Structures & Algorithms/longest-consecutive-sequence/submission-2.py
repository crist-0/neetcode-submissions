class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        s = set()
        for i in nums:
            s.add(i)
        
        mx = 0

        for i in nums:
            if i-1 not in s:
                t = i
                l = 0
                while t in s:
                    l += 1
                    t += 1
                mx = max(mx, l)

        return mx