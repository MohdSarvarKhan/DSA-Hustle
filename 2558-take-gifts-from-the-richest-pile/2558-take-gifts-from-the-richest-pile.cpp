class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        
        priority_queue<int>q(gifts.begin(),gifts.end());

        long long ans = 0;

        while(k > 0){
            int x = q.top();
            q.pop();
            x = sqrt(x);
            q.push(x);
        k--;
        }

        while(!q.empty()){
            ans += q.top();
            q.pop();
        }
    return ans;
    }
};