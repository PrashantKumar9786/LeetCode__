class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = unique(nums.begin(), nums.end()) - nums.begin();
        return k;
    }
};