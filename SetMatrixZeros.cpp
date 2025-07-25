class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        
        int row = matrix.size();
        int col = matrix[0].size();
        bool firstCol = false;
        bool firstRow = false;

        

        for(int i = 0 ;i < row ;i++)
        {
            if(matrix[i][0]==0)
            {
                firstCol = true;
                break;
            }
        }

        for(int i = 0 ;i < col ;i++)
        {
            if(matrix[0][i]==0)
            {
                firstRow = true;
                break;
            }
        }


        for(int i = 1 ;i < row ;i++)
        {
            for(int j = 1;j<col;j++)
            {
                if(matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }


        for(int i=1;i<row;i++)
        {
            for(int j=1;j<col;j++)
            {
                if(matrix[i][0]==0 || matrix[0][j]==0)
                {
                    matrix[i][j] = 0;
                }
            }
        }


        if(firstRow)
        {
            for(int i=0;i<col;i++)
            {
                matrix[0][i] = 0;
            }
        }
        if(firstCol)
        {
            for(int i=0;i<row;i++)
            {
                matrix[i][0] = 0;
            }
        }
    }
};
