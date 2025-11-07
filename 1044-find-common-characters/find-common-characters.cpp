class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
          vector<int>common(26, INT_MAX);
          
          for(string &word: words){
            vector<int>count(26, 0);
            for(char c: word){
                count[c-'a']++;
            }

            for(int i = 0; i<26; i++){
                common[i] = min(common[i], count[i]);
            }
          }

          vector<string>result;
          for(int i = 0; i<26; i++){
              while(common[i]-- > 0)
              result.push_back(string(1, 'a'+i));
          }
          return result;

    }
};