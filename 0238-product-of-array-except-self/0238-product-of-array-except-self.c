/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int *result = (int*)malloc(numsSize * sizeof(int));

    if (result == NULL) {
        // Handle memory allocation failure
        return NULL;
    }

    int *leftProducts = (int*)malloc(numsSize * sizeof(int));
    int *rightProducts = (int*)malloc(numsSize * sizeof(int));

    if (leftProducts == NULL || rightProducts == NULL) {
        // Handle memory allocation failure
        free(result);
        free(leftProducts);
        free(rightProducts);
        return NULL;
    }

    // Initialize the left and right products array
    leftProducts[0] = 1;
    for (int i = 1; i < numsSize; i++) {
        leftProducts[i] = leftProducts[i - 1] * nums[i - 1];
    }

    rightProducts[numsSize - 1] = 1;
    for (int i = numsSize - 2; i >= 0; i--) {
        rightProducts[i] = rightProducts[i + 1] * nums[i + 1];
    }

    // Calculate the result array
    for (int i = 0; i < numsSize; i++) {
        result[i] = leftProducts[i] * rightProducts[i];
    }

    // Free the auxiliary arrays
    free(leftProducts);
    free(rightProducts);

    return result;
}