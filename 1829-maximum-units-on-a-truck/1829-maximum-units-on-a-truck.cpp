class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(),
         [](auto &a, auto &b) {
             return a[1] > b[1];
         });

    int totalUnits = 0;

    for (auto &box : boxTypes) {
        int count1 = min(truckSize, box[0]);
        totalUnits += count1 * box[1];
        truckSize -= count1;

        if (truckSize == 0) break;

    }

    return totalUnits;
    }
};