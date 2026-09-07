class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int left = 0, right = 0, n= nums.size(),maxValue = nums[0];
        long long maXcount = 0, result = 0;

        for(int val : nums){
            maxValue = max(maxValue,val);
        }

        while(right < n){
            if(maxValue == nums[right]){
                maXcount++;
            }

            while(maXcount >= k){
                result += (n - right);
                if(maxValue == nums[left]){
                    maXcount--;
                }
                left++;
            }

            right++;
        }
        return result;
    }
};