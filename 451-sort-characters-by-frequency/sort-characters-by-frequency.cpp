class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int>mp;
        vector<pair<char, int>>pr;
        for(int i = 0; i<s.size(); i++){
            mp[s[i]]++;
        }
        for(auto it: mp){
            if(it.second > 0)
               pr.push_back({it.first, it.second});
        }
         sort(pr.begin(), pr.end(), [](const pair<char,int>& a, const pair<char,int>& b){
          return a.second > b.second;  
    });
       string ans = "";
      for(auto &it: pr){
           ans += string(it.second, it.first);
      }
      return ans;
    }
};