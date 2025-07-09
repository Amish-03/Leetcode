class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int n=score.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(score[i][k]<score[j][k])
                {
                    vector<int> temp=score[i];
                    score[i]=score[j];
                    score[j]=temp;
                }
            }
        }
        return score;
    }
};