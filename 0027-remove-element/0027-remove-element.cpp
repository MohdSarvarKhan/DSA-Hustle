class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // int start = arr.size()-1 , end = start;

        // while(start >= 0){
        //     if(arr[start] == val && arr[end] == val){
        //         start--;
        //         end--;
        //     }
        //     else if(arr[start] == val){
        //         swap(arr[start],arr[end]);
        //         start--;
        //         end--;
        //     }
        //     else{
        //         start--;
        //     }
        // }
        // return end - start;

        int index = 0;
        for(int i = 0; i < nums.size();i++){
            if(nums[i] != val){
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};