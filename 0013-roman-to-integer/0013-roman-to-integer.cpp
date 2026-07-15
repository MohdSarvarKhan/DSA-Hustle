class Solution {
public:

        int findValue(char c){
            switch(c){
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            }
            return 0;
        }
        int romanToInt(string s) {

    int ans = 0;
    for (int i = 0; i < s.size(); i++){
        int curr = findValue(s[i]);

        if( i + 1 < s.size() && curr < findValue(s[i+1])){
            ans -= curr;
        }
        else
                ans += curr;


    }
        return ans;
    }
};



// bool isnextcharbigger (char first , char next){

//     string Roman = "IVXLCDM";
//     if(first == next){
//         return false;
//     }

//     for(int i = 0; i < 7; i++){
//         if(first == Roman[i]){
//             return true;
//         }

//         else if(next == Roman[i]){
//             return false;
//         }
//     }
// }
//     int findvalue(char c){
//         string Roman = "IVXLCDM";
//         int numbers[] = {1,5,10,50,100,500,1000};

//         for(int i = 0; i < 7; i++){
//             if(c == Roman[i]){
//                 return numbers[i];
//             }
//         }
//     }
    
    
        
//         int n = s.size(), index = 0, ans = 0;

//         while(index < n){

//             if(index != n - 1 && isnextcharbigger(s[index],s[index+1])){
//                 ans -= findvalue(s[index]);
//             }
//             else{
//                 ans += findvalue(s[index]);
//             }
//             index++;
//         }