class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        # If lengths match, all elements are unique. If not, duplicates exist.
        return len(nums) != len(set(nums))
