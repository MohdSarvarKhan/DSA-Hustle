class Solution {
public:
    bool isPalindrome(string s) {
        
        if(s.empty()){
            return true;
        }

        int index = 0;
        for(int i = 0; i < s.size(); i++){

        if(s[i] >= 'A' && s[i]<='Z' ||
                s[i] >= 'a' && s[i]<='z' ||
                s[i] >= '0' && s[i]<='9'
                ){
                    if(s[i] >= 'A' && s[i]<='Z'){
                        s[index++] = 'a' + (s[i] - 'A');
                    }
                    else{
                        s[index] = s[i];
                        index++;
                    }
               }
        }

        s.resize(index);

        int start = 0 , end = s.size()-1;
        while(start < end){

            if(s[start] != s[end]){
                return false;
            }
            else{
                start++;
                end--;
            }
        }
        return true;
    }
};