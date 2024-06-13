int climbStairs(int n) {
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 2;
    }

    int first = 1; // Represents ways to reach step 1
    int second = 2; // Represents ways to reach step 2

    int ways;
    for (int i = 3; i <= n; i++) {
        ways = first + second;
        first = second;
        second = ways;
    }

    return ways;
}