class Solution(object):
    def subsetXORSum(self, nums):
        def dfs(i, xor_val):
            if i == len(nums):
                return xor_val
            return dfs(i + 1, xor_val) + dfs(i + 1, xor_val ^ nums[i])
        return dfs(0, 0)