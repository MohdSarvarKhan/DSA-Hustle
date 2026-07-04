class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        ans.reserve(address.size() + 6);

        for (char ch : address) {
            if (ch == '.') {
                ans.append("[.]");
            } else {
                ans.push_back(ch);
            }
        }

        return ans;
    }
};