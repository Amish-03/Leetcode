int findMin(int* nums, int numsSize) {
    int start = 0, end = numsSize - 1;

    // Edge case: if the array is not rotated
    if (nums[start] <= nums[end]) {
        return nums[start];
    }

    while (start < end) {
        int mid = start + (end - start) / 2;

        // Check if mid is greater than mid+1, mid+1 is the smallest
        if (nums[mid] > nums[mid + 1]) {
            return nums[mid + 1];
        }

        // Check if mid is smaller than mid-1, mid is the smallest
        if (nums[mid - 1] > nums[mid]) {
            return nums[mid];
        }

        // Decide which part to search in
        if (nums[mid] > nums[start]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return nums[start];
}
