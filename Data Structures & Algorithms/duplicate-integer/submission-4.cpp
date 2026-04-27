class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> hash;
        hash.reserve(nums.size());  // no rehashing
        for (int num : nums) {
            if (!hash.insert(num).second) return true;  // early exit
        }
        return false;
    }
};