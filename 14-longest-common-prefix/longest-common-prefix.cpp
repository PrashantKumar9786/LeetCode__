class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         if (strs.empty()) return "";
        int n = strs.size();
        string prefix = strs[0];
        
        for(int i = 1; i<(int)strs.size(); ++i){
            int limit = min((int)prefix.size(), (int)strs[i].size());
            int j = 0;
            while(j < limit && prefix[j] == strs[i][j])
            ++j;

            prefix = prefix.substr(0, j);
            if(prefix.empty()) return "";
        }
        return prefix;
    }
};