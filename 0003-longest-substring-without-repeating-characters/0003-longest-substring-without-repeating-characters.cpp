class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        bool freq[256] = {0};
        int start = 0 , end = 0, ans = 0, n = s.size();

        while(end < n){
            while(freq[s[end]]){
                freq[s[start]] = 0;
                start++;
            }

            freq[s[end]] = 1;
            end++;

            ans = max(ans,end - start);
        }
        return ans;
    }
};