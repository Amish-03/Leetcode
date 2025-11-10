class Solution {
public:
    vector<int> getRow(int rowIndex) 
    {
        
            vector<int> prevRow = {1};
            
            for(int i=1;i<=rowIndex;i++)
            {
                vector<int> curRow;
                curRow.push_back(1);
                for(int j=1;j<i;j++)
                {
                    curRow.push_back(prevRow[j-1]+prevRow[j]);
                }
            curRow.push_back(1);
            prevRow=curRow;
            }

        return prevRow;
        
            
    }
};