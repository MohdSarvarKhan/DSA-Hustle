class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
        int n = arr.size();
        int row = n,col = n;
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                swap(arr[i][j],arr[j][i]);
            }
        }

        for(int i = 0; i < row; i++){
            for(int j = 0; j < (col/2); j++){
                swap(arr[i][j],arr[i][col-1-j]);
            }
        }

















        
    }
};