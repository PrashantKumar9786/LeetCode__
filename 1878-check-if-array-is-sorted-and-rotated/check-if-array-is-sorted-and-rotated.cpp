class Solution {
public:
    void Reverse(vector<int>&nums, int i, int j)
    {
        while(i<j){
           swap(nums[i], nums[j]);
           i++;
           j--;
        }
    }

    bool check(vector<int>& nums) {
        vector<int>v;  
        for(int i = 0; i<nums.size(); i++){
            v.push_back(nums[i]);
        }
         sort(v.begin(), v.end());
         int d = -1;
         for(int i = 0; i<nums.size()-1; i++){
            if(nums[i]>nums[i+1]){
               d = i;
               break;
            }
         }
         if(d == -1)
         return true;
           int n = nums.size();
           d = d%n;
           Reverse(nums, 0, d);
           Reverse(nums, d+1, n-1);
           Reverse(nums, 0, n-1);

         for(int i = 0; i<nums.size(); i++){
            if(nums[i] != v[i])
            return false;
         }
         return true;
    }
};