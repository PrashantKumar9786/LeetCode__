class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxi = INT_MIN;
        int left = 0, right = n-1;
        while(left < right){
            int width = right-left;
            int Height = min(height[left], height[right]);
            int Area = width * Height;
            maxi = max(maxi, Area);
            if(height[left] < height[right])
             left++;
            else right--;
        }
        return maxi;
    }
};