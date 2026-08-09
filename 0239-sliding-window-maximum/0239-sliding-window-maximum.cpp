class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        int n = arr.size();
        deque<int> dq;

        for(int i = 0; i < k - 1; i++){
            while(!dq.empty() && arr[dq.back()] < arr[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }

        vector<int> ans;

        for(int i = k - 1; i < n; i++){
            while(!dq.empty() && arr[dq.back()] < arr[i]){
                dq.pop_back();
            }
            dq.push_back(i);

            if(dq.front() <= i - k){
                dq.pop_front();
            }

            ans.push_back(arr[dq.front()]);
        }
        return ans;
    }
};