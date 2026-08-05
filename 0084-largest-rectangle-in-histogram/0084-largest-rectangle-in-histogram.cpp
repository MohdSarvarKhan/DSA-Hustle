class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n = arr.size();
        vector<int> NSR(n);
        vector<int> NSL(n,-1);
        
        stack<int> st;
        
        for(int i = 0; i < n; i++){
            while(!st.empty() && arr[st.top()] > arr[i]){
                NSR[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        
        while(!st.empty()){
        NSR[st.top()] = n;
        st.pop();
        }
        
        for(int i = n - 1; i >= 0; i--){

            while(!st.empty() && arr[i] < arr[st.top()]){
                NSL[st.top()] = i;
                st.pop();
            }

            
            st.push(i);
        }
        
        int ans = 0;
        for(int i = 0; i < n; i++){
            ans = max(ans,(NSR[i] - NSL[i] - 1) *arr[i]);
        }
        
        return ans;
    }
};