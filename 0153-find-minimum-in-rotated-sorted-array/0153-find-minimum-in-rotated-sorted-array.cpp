class Solution {
public:
    int findMin(vector<int>& nums) {
          int start = 0;
        int end = nums.size() - 1;
        int mid;
        while (start < end) {
            mid = start + (end - start) / 2;

            if (nums[mid] > nums[end]) {
                // Minimum is in the right half
                start = mid + 1;
            } else {
                // Minimum is in the left half or at mid
                end = mid;
            }
        }

        return nums[start];
    }
};