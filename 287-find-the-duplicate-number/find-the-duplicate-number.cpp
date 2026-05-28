class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i = 0; i<nums.size(); i++){
            int Celem = nums[i];
            while(Celem != i && Celem != nums[Celem]){
                swap(nums[i], nums[Celem]);
                Celem = nums[i];
            }
        }
        return nums[0];
    }
};