#include<math.h>
class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        int n=queries.size();
        int k=points.size();
        vector<int> ans(n);
        int count=0;
        for(int i=0;i<n;i++)
        {
            count=0;
            vector<int> curCircle= queries[i];
            for(int j=0;j<k;j++)
            {
                vector<int> curPoint=points[j];
                long long curDist = (curCircle[0]-curPoint[0])*(curCircle[0]-curPoint[0]) + (curCircle[1]-curPoint[1])*     (curCircle[1]-curPoint[1]);
                if(curDist<=curCircle[2]*curCircle[2])
                    count++;
            }
            ans[i]=count;
        }
        return ans;
    }
};