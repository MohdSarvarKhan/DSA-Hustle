class Solution {
public:

    bool isVowel(char ch){
    return ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
           ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
}

    string sortVowels(string s) {
        int n = s.size();
//         string t = s;
//         // vector <string> t;
//         int count[256] = {0};
//         // vector<int> count(10,0);
        
//         for(int i = 0; i < n; i++){
//             // count[s[i]]++;
//             if(isVowel(s[i]))
//              count[s[i]]++;
//         }

//         for(int i = 0; i < n; i++){
//             if(isVowel(s[i])){
//                 for (int j = 0; j < 256; j++) {
//     if (count[j] > 0 && isVowel((char)j)) {
//         t[i] = (char)j;
//         count[j]--;
//         break;
//     }
// }
//             }
//             else{
//                 t[i] = s[i];
//             }
//         }
//         return t;
        string vowels = "";
        for(int i = 0; i < n; i++){
            if(isVowel(s[i])){
                vowels += s[i];
            }
        }

        sort(vowels.begin(), vowels.end());

        int j = 0; int i =0;
        while(i < n){
            if(isVowel(s[i])){
                s[i] = vowels[j];
                j++;
                
            }
            i++;
        }
        return s;

    }
};