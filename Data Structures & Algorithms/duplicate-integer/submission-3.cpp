class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> hash;
        for (int i = 0; i < nums.size(); i++){
            if (isIn(hash, nums[i])){
                continue;
            }
            else {
                hash.insert(nums[i]);  // insert instead of push_back
            }
        }
        return (hash.size() != nums.size());
    }

    bool isIn(unordered_set<int>& nums, int num){
        return nums.count(num);  // O(1) average
    }
};