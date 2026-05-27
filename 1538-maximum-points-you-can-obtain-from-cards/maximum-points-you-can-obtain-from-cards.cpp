class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int totalpts = 0;
        for(int i = 0; i<n; i++){
            totalpts += cardPoints[i];
        }
        
        int windowSize = n-k;

        if(windowSize == 0) return totalpts;
        int currsum = 0;
        for(int i = 0; i<windowSize; i++){
                currsum += cardPoints[i];
        }

        int minsum = currsum;

        for(int i = windowSize; i<n; i++){
            currsum += cardPoints[i];
            currsum -= cardPoints[i-windowSize];

            minsum = min(minsum, currsum);
        }
        return totalpts-minsum;
        
    }
};