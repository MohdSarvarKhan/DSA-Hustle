class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int>  ans;
        int rowStart = 0, colStart = 0, rowEnd = matrix.size()-1,colEnd = matrix[0].size()-1;

        while(rowStart <= rowEnd && colStart <= colEnd){

        for(int j = colStart; j <= colEnd; j++){
             ans.push_back(matrix[rowStart][j]);
        }
        rowStart++;

        for(int i = rowStart; i <= rowEnd; i++){
             ans.push_back(matrix[i][colEnd]);
        }
        colEnd--;

        if(rowStart <= rowEnd){
            for(int j = colEnd; j >= colStart; j--){
             ans.push_back(matrix[rowEnd][j]);
        }
        rowEnd--;
        }
        
        if(colStart <= colEnd){
            for(int i = rowEnd; i >= rowStart; i--){
             ans.push_back(matrix[i][colStart]);
        }
        colStart++;
        }
        
        }

        return ans;



    }
};