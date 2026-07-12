class Solution {
public:
    string sortSentence(string s) {
        vector<string>words(10);
		string curr = "";

		for(char ch : s){

            if(isdigit(ch)){
                words[ch - '0'] = curr;
                curr = "";
            }

            else if(ch == ' '){

            }
            else{
                curr += ch;
            }
        }



		string ans;

        for(int i = 1; i < 10; i++){
            if(words[i] == ""){
                break;
            }
            if(!ans.empty()){
                ans += " ";
            }

            ans += words[i];
        }
		
        return ans;

    }
};