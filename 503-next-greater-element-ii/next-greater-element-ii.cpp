class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int p = nums.size();
        for(int i = 0; i<p; i++){
            nums.push_back(nums[i]);
        }
        int n = nums.size();
        vector<int>res(n, -1);
        stack<int>st;

        for(int i = n-1; i>=0; i--){
            while(!st.empty() && st.top() <= nums[i]){
                st.pop();
            }

            if(!st.empty())
            res[i] = st.top();

            st.push(nums[i]);
        }
        vector<int>temp;
        for(int i = 0; i<=res.size()/2-1; i++){
            temp.push_back(res[i]);
        }
        return temp;
    }
};