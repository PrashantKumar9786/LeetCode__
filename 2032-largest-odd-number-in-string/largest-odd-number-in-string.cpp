class Solution {
public:
    string largestOddNumber(string num) {
           int n = num.length()-1;
           int ind = -1;
           for(int i = n; i>=0; i--){
               int digit = num[i] - '0';
               if(digit % 2 != 0){
                   ind = i;
                   break;
               }
           }
           if(ind != -1)
             return num.substr(0, ind+1);
           else
             return "";
    }
};