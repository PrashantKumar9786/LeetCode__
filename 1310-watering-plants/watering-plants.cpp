class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int t = capacity;
        int steps = 0;
        for(int i = 0; i < plants.size(); i++){
            if(t >= plants[i]){
                t = t - plants[i];
                 steps++;
            }
            else{
                steps += (i) + (i+1);
                t = capacity;
                t = t - plants[i];
            }
        }
        return steps;
    }
};