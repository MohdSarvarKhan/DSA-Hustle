class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long sum = 0 , count = 0,product;
        int left = 0 , right = 0 , n = nums.size();

        if(k <=1)
        return 0;

        while(right < n){
            sum += nums[right];
            product = sum * (right - left + 1);

            while(product >= k){
                sum -= nums[left];
                left++;
                product = sum * (right - left + 1);
                
            }

            count += (right - left + 1);
            right++;
        }

        return count;
    }
};