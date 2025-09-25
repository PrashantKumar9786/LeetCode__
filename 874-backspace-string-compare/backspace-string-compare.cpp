class Solution {
public:
    bool backspaceCompare(string s, string t) {
         stack<char>st;
         stack<char>vt;
         for(int i = 0; i<s.size(); i++){
              if(s[i] != '#')
               st.push(s[i]);
              else if(s[i] == '#' && !st.empty())
                st.pop();
         } 
         for(int i = 0; i<t.size(); i++){
           if(t[i] != '#')
               vt.push(t[i]);
              else if(t[i] == '#' && !vt.empty())
                vt.pop();
         }
         while(!st.empty() && !vt.empty()){
            if(st.top() != vt.top())
            {
                return false;
            }
           
                st.pop(); vt.pop();
         }
         return (st.empty() && vt.empty()) ? true : false;
    }
};