int maxArea(int* height, int heightSize) {
    int left = 0, right = heightSize - 1;
    int maxArea = 0;

    while (left < right) {
        // Calculate the current area
        int currentHeight = min(height[left], height[right]);
        int currentWidth = right - left;
        int currentArea = currentHeight * currentWidth;
        
        // Update the maximum area if the current area is larger
        maxArea = max(maxArea, currentArea);

        // Move the pointer pointing to the shorter line towards the other pointer
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return maxArea;
}

int max(int a, int b) {
    return a > b ? a : b;
}

int min(int a, int b) {
    return a < b ? a : b;
}