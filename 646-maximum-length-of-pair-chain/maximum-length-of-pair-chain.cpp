class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
          sort(pairs.begin(), pairs.end(), [](vector<int>& a, vector<int>& b) {
            return a[1] < b[1];
        });
        int prev = INT_MIN;
        int cnt = 0;
        for(auto it: pairs){
            if (prev < it[0]) {
                prev = it[1];
                cnt++;
            }
        }
        return cnt;
    }
};