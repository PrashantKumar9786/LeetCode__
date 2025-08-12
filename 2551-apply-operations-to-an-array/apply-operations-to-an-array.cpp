class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                nums[i] = nums[i]*2;
                nums[i+1] = 0;
                continue;
            }
        }
       vector<int>res;

       for(auto it: nums){
        if(it != 0)
            res.push_back(it);
       }
       int zeroes = n - res.size();
       int m = res.size();
       int i = 0, j = 0, k = 0;
       while(m--){
        nums[k++] = res[i++];
       }
       while(zeroes--){
        nums[k++] = 0;
       }
       return nums;

    }
};