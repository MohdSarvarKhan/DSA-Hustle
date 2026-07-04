class Solution {
public:
    string addStrings(string num1, string num2) {
        int endfirst = num1.size()-1,endsecond = num2.size()-1,carry = 0;
        string ans;

        while(endfirst >= 0 || endsecond >= 0 || carry != 0){

            int sum = carry ;

            if(endfirst >= 0){
                sum += num1[endfirst] - '0';
                endfirst--;
            }

            if(endsecond >= 0){
                sum += num2[endsecond] - '0';
                endsecond--;
            }

            ans.push_back(sum % 10 + '0');
            carry = sum / 10;
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};