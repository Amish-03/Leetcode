class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x;
        else if (x<4) return 1;
        long long left = 2, right = x / 2, ans = 0;
        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long sq = mid * mid;
            if (sq == x) return mid;
            else if (sq < x) {
                ans = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return ans;
    }
};