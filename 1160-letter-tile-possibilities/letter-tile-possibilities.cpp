class Solution {
public:
    int cnt = 0;
    void find(string nums, int start){
        cnt++;
        for(int i = start; i<nums.size(); i++){
            if(i == start || nums[start] != nums[i]){
                swap(nums[start], nums[i]);
                find(nums, start+1);
            }
        }
        return;
    }
    
    int numTilePossibilities(string tiles) {
         int beg = 0;
         sort(tiles.begin(), tiles.end());
         find(tiles, beg);
         return cnt-1;
    }
};