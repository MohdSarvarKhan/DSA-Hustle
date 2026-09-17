class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";

        if(strs.empty()){
            return ans;
        }

        bool match = true;


        int minLen = strs[0].size();

        for(int i = 1; i < strs.size(); i++) {
            minLen = min(minLen, (int)strs[i].size());
        }


        for(int i = 0; i < minLen; i++){
            for(int j = 1; j < strs.size(); j++){
                if(strs[j][i] != strs[0][i]){
                    match = false;
                    break;
                }
                
            }
            if(!match)
            break;

            ans.push_back(strs[0][i]);
        }
        return ans;
        
    }
};