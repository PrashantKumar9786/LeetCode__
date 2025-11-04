class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int major = nums[0];
       int vote = 1;
       for(int i = 1; i<nums.size(); i++){
           if(vote == 0){
            vote++;
            major = nums[i];
           }
           else if(nums[i] == major)
           vote++;
           else
           vote--;
             
       }
       return major;
    }
};