class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
       int Even = 0;
       int odd = 1;

       int n = nums.size();
       while(Even < n && odd < n){
            if(nums[Even] % 2 == 0)
              Even += 2;
            else if(nums[odd] % 2 == 1)
              odd += 2;
            else
            {
                swap(nums[Even], nums[odd]);
                Even += 2;
                odd += 2;
            }
       }
       return nums;

       
    }
};