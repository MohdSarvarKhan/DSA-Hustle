class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        int max_area = 0;
        
        // Loop 'n' tak chalega (<= n), taaki aakhir mein bache hue sab pop ho jayein
        for(int i = 0; i <= n; i++){
            
            // i == n par hum ek imaginary 0 height ka bar maante hain
            // taaki stack mein jo bhi bacha hai wo sab pop ho jaye
            int curr_height = (i == n) ? 0 : heights[i];
            
            while(!st.empty() && curr_height < heights[st.top()]){
                // Jis element ko nikal rahe hain, uski height lo
                int h = heights[st.top()];
                st.pop();
                
                // Pop hone ke baad stack ka naya top hi uska NSL hai
                int nsl = st.empty() ? -1 : st.top();
                
                // Current index 'i' uska NSR hai
                int nsr = i;
                
                int width = nsr - nsl - 1;
                max_area = max(max_area, h * width);
            }
            
            st.push(i);
        }
        
        return max_area;
    }
};