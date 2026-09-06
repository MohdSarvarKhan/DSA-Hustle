class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        int maxLength = 0, left = 0,right = 0, n = nums.size();

        while(right < n){
             count[nums[right]]++;

            while(count[nums[right]] > k){
                count[nums[left]]--;
                left++;
            }

            maxLength = max(maxLength,right - left + 1);
            right++;             
        }
        return maxLength;
    }
};