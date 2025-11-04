class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int>mp;
        int ans = 0;
        int maxi = INT_MIN;
        for(auto it: nums){
            mp[it]++;
        }
        for(auto it: mp){
            if(it.second>maxi)
            maxi = it.second;
        }
        for(auto it: mp){
            if(it.second == maxi)
             ans += it.second;
        }
        return ans;
    }
};