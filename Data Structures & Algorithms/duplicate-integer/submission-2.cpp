class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        vector<int> hash;
        for (int i = 0; i < nums.size(); i++){
            if (isIn(hash,nums[i])){
                continue;
            }
            else {
                hash.push_back(nums[i]);
            }
        }
        return (hash.size() != nums.size());
    }

    bool isIn(vector<int>& nums, int num){
        for (int i = 0; i < nums.size() ; i++){
            if (nums[i] == num){
                return true;
            }

        }
        return false;
    }
};