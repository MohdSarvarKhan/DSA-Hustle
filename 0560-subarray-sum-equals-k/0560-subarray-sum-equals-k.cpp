class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int result = 0;
        int prefixSum = 0;

        unordered_map<int,int> mp;
        mp[0] = 1;

        for(int val : nums){
            prefixSum += val;

            result += mp[prefixSum - k];
            mp[prefixSum]++;
        }

        return result;
    }
};