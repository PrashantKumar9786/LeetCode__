class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
       vector<int>res(k);

       if(n == 1)
       return;
       if(k == 0)
       return;
       if(k>n)
        k = k % n;

       res[0] = nums[0];
       for(int i = 0; i<k; i++){
        res[i] = nums[n-k+i];
       }

       for(int i = n-1; i>=k; i--){
        nums[i] = nums[i-k];
       }
       for(int i = 0; i<k; i++){
        nums[i] = res[i];
       }
    }
};