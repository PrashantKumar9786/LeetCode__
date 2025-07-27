class Solution {
public:
    int countHillValley(vector<int>& nums) {
        vector<int>v;
        unordered_map<int, int>mp;
        for(auto it: nums){
            mp[it]++;
        }
        v.push_back(nums[0]);
        for(int i= 1; i<nums.size(); i++){
            if(mp[nums[i]] > 0 && nums[i] != nums[i-1]){
            v.push_back(nums[i]);
            }
        }
        int cnt = 0;
        for(int i = 1; i<v.size()-1; i++){
                if((v[i]>v[i+1] && v[i]>v[i-1]) || (v[i]<v[i+1] && v[i]<v[i-1]))
                cnt++;
        }
        return cnt;

    }
};