class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        vector<int> ans(nums.size(), -1);
        int n = nums.size();

        for(int i = 0; i < (2 * n - 1); i++){

            int actual_index = i % n;

            while(!st.empty() && nums[actual_index] > nums[st.top()]){
                ans[st.top()] = nums[actual_index];
                st.pop();
            }

            if(i < n)
            st.push(actual_index);
        }
        

        return ans;
    }
};