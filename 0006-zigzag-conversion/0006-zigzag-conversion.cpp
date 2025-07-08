class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;

        int n = numRows;
        int skip = 0;
        int start = 0;
        string ans = "";

        for (start = 0; start < numRows; start++) {
            int cur = start;
            while (cur < s.size()) {
                // First jump: always valid if cur < s.size()
                ans.push_back(s[cur]);

                // Zigzag middle rows: add second character only for non-first and non-last rows
                int secondJump = cur + 2 * (n - 1);
                int diagJump = cur + 2 * (n - 1 - skip / 2); // alternative diag jump

                // Add second point for middle rows only if within bounds
                if (start != 0 && start != numRows - 1) {
                    int diag = cur + (2 * (numRows - 1 - start)) * 2;
                    if (cur + (2 * (numRows - 1 - start)) < s.size()) {
                        diag = cur + (2 * (numRows - 1 - start));
                        if (diag < s.size())
                            ans.push_back(s[diag]);
                    }
                }

                cur += 2 * (numRows - 1);
            }
        }

        return ans;
    }
};
