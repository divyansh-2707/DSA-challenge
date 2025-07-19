class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans(numRows);

        for(int i=0;i<numRows;i++)
        {
            vector<int>p(i + 1 , 1);
            for(int j=1;j<i;j++)
            {
                p[j] = ans[i-1][j] + ans[i-1][j-1];
            } 
            ans[i] = p;
        }
        return ans;
    }
};
