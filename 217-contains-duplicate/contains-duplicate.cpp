class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int,int>H;
        for(int i=0;i<nums.size();i++){
            H[nums[i]]++;
        }
        for(auto it: H){
            if(it.second > 1)
            return true;
        }
        return false;
    }
};