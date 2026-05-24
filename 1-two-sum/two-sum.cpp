class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>mp;
        for(int i = 0; i<nums.size(); i++){
            int num = nums[i];
            int needNumber = target - num;
            if(mp.find(needNumber) != mp.end())
            return {mp[needNumber], i};
            mp[num] = i;
        }
        return {-1, -1};
    }

};