class Solution {
private:
    int cntPalindrome(string &s, int left, int right){
        int cnt = 0;
        
        while(left>=0 && right < s.length() && s[left] == s[right]){
            cnt++;
            left--;
            right++;
        }
        return cnt;
    }
public:
    int countSubstrings(string s) {
        int cnt = 0;

        for(int i = 0; i<s.length(); i++){

            // cnt odd lenght palindromes
            cnt += cntPalindrome(s, i, i);

            // cnt even length palindrome
            cnt += cntPalindrome(s, i, i+1);
        }
        return cnt;
    }
};