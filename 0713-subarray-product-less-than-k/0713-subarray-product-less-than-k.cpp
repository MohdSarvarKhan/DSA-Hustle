class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& arr, int k) {
        
        if(k <= 1)
        return 0;
        
        int left = 0,right = 0 , n = arr.size();
        int product = 1;
        int count = 0;
        
        while(right < n){
            
            product *= arr[right];
            
            while(product >=k){
                product /= arr[left];
                left++;
            }
            
            count += (right - left + 1);
            right++;
            
        }
        
        return count;
    }
};