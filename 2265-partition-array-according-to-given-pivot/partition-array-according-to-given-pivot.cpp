class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
            vector<int>s, l;
            int cnt = 0;
            for(int i = 0; i<nums.size(); i++){
                if(nums[i] < pivot)
                s.push_back(nums[i]);
                else if(nums[i]>pivot)
                l.push_back(nums[i]);
                else if(nums[i] == pivot)
                cnt++;
            }               
            int n = s.size();
            int m = l.size();
            int k = 0;
            int i = 0, j = 0;
            while(n--){
               nums[k++] = s[i++];
            }
            while(cnt--){
               nums[k++] = pivot;
            }
            while(m--){
               nums[k++] = l[j++];
            }

            return nums;
    }
};