class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> initrow = {1};
        ans.push_back(initrow);
        if(numRows==1)
        {
            return ans;
        }
        initrow = {1,1};
        ans.push_back(initrow);
        vector<int> prevRow = {1,1};
        for(int i=2;i<numRows;i++)
        {
            vector<int> curRow;
            curRow.push_back(1);
            for(int j=1;j<i;j++)
            {
                curRow.push_back(prevRow[j] + prevRow[j-1]);
            }
            curRow.push_back(1);
            ans.push_back(curRow);
            prevRow = curRow;
        }
        return ans;
    }
};