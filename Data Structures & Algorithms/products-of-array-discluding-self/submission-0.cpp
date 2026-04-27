class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> productLeft(nums.size(),1);
        vector<int> productRight(nums.size(),1);

        for (int i = 1; i< nums.size(); i++ ){
            productLeft[i] = productLeft[i-1] * nums[i-1];
        }
        for (int i = nums.size()-2 ; i>=0 ; i--){
            productRight[i] = productRight[i + 1] * nums[i+1]; 
        }

        vector<int> res;
        for (int i = 0; i < nums.size();i++){
            res.push_back(productLeft[i] * productRight[i]);
        }
        return res;
    }
};
