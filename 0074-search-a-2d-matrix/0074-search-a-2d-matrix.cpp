class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int mid , row = matrix.size(),col = matrix[0].size();

        int start = 0, end = row * col - 1;

        while(start<= end){
            mid = (start + end)/2;

        int row_index = (mid / col);
            int col_index = (mid % col);

            if(matrix[row_index][col_index] == target){
                return true;
            }

            else if(matrix[row_index][col_index] < target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        
        return false;

        

    }
};