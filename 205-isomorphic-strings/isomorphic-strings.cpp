class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int>sIndex;
        unordered_map<char, int>tIndex;

        for(int i = 0; i<s.size(); i++){
            if(sIndex.find(s[i]) == sIndex.end())
                sIndex[s[i]] = i;

            if(tIndex.find(t[i]) == tIndex.end())
                tIndex[t[i]] = i;

            if(sIndex[s[i]] != tIndex[t[i]])
                return false;
        }
        return true;
    }
};