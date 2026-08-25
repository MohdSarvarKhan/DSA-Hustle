class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        
        priority_queue<int>q(gifts.begin(),gifts.end());

        long long ans = 0;
        for(int i = 0; i < gifts.size();i++){
            ans+=gifts[i];
        }

        int remaining;
        while(k ){
            remaining = q.top();
            // int x = q.top();
            q.pop();
            ans -= remaining - sqrt(remaining);
            q.push(sqrt(remaining));
        k--;
        }

        // while(!q.empty()){
        //     ans += q.top();
        //     q.pop();
        // }
    return ans;
    }
};