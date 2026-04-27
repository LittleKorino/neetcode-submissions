class Solution {
public:
    int trap(vector<int>& height) {
        int res = 0;
        vector <int> prefixMax(height.size());
        vector <int> suffixMax(height.size());

        prefixMax[0] = height[0];
        for (int i = 1 ; i < height.size() ; i++){
            prefixMax[i] = max(prefixMax[i-1],height[i]);
        }
        
        suffixMax[height.size() - 1] = height[height.size() - 1];
        for (int i = height.size() - 2 ; i >= 0 ; i--){
            suffixMax[i] = max(suffixMax[i+1],height[i]);
        }

        for (int i = 0; i < height.size(); i++){
            res = res + min(prefixMax[i], suffixMax[i]) - height[i];
        }

        return res;

    }
};
