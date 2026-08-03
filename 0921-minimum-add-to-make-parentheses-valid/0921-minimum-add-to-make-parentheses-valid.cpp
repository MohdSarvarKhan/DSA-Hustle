class Solution {
public:
    int minAddToMakeValid(string s) {
    //     int left = 0, right = 0;

	// for(int i=0;i<s.size();i++){
	// 	if(s[i]=='('){
	// 		left++;
	// 	}
	// 	else{
	// 		if(left){
	// 			left--;
	// 		}
	// 		else{
	// 			right++;
	// 		}
	// 	}
	// }

	// return left+right;

    stack<char> st;

    for(int i = 0; i < s.size(); i++){

       
            if(s[i] == ')' && !st.empty() && st.top() == '('){
                st.pop();

            }
            else{
                st.push(s[i]);
                
            }
    }
        return st.size();

    }

    
};