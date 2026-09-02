class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int result = 0;
        int prefixSum = 0;
        int rem;
        unordered_map<int,int> mp;
        mp[0] = 1;

        for(int val : nums){
            prefixSum += val;

            rem = ((prefixSum % k) + k)%k;
            result += mp[rem];
            mp[rem]++;
        }

        return result;
    }
};