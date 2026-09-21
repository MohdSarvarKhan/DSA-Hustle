class Solution {
public:
    int majorityElement(vector<int>& nums) {

                // moore's voting algo

        int count = 0;
        int ele;
            for(int i = 0; i < nums.size(); i++){
                if(count == 0){
                    count = 1;
                    ele = nums[i];
                }
                else if(nums[i] == ele)
                count++;
                else
                count--;
            }

            int count1 = 0;
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] == ele)
                count1++;
            }
            if(count1 > nums.size()/2 )
            return ele;


            return -1;



        // int ans = -1;

        // unordered_map<int,int> mp;

        // for(int i = 0; i < nums.size(); i++){
        //     mp[nums[i]]++;
        // }

        // int maxCount = nums.size()/2;
        // for(auto x : mp){
        //     if(x.second > maxCount){
        //         ans = x.first;
        //     }
        // }

        // return ans;
    }
};