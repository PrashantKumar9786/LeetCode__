class Solution {
public:
    string removeOuterParentheses(string s) {
           string res = "";

           int level = 0;

           for(auto c: s){
            if(c == '('){
                if(level > 0) res += c;
                 level ++;
            }
            else if( c == ')'){
                level--;

                if(level > 0) res += c; 
            }
           }
           return res;
    }
};