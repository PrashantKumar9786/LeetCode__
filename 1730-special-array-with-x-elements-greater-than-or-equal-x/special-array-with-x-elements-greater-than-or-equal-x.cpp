class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        for(int x = 0; x<=n; x++){
            cnt = 0;
            for(int i = 0; i<n; i++){
                if(nums[i] >= x)
                cnt++;
            }
            if(cnt == x) return x;
        }
        return -1;

    }
};