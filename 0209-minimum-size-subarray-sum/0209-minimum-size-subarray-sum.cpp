class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0,right = 0, sum = 0 , minWindowSize = nums.size() + 1;

        while(right < nums.size()){
            sum += nums[right];
            while(sum >= target){
                minWindowSize = min(minWindowSize, right - left + 1);
                sum -= nums[left];
                left++;
            }
                right++;
        }

         return minWindowSize == nums.size() + 1 ? 0 : minWindowSize;
    }
};