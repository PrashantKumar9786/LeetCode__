class Solution {
public:
    long long maximumSubsequenceCount(string text, string pattern) {
        int n = text.size();
        long long ans = 0, p1 = 0, p2 = 0;
        for(int i = 0; i<n; i++){
            if(text[i] == pattern[1])
            {
                ans += p1;
                ++p2;
            }
            if(text[i] == pattern[0]) ++p1;
        }
        return ans + max(p1,p2);
    }
};