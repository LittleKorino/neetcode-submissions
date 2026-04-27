class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> s;
        for (int i = 0 ; i< nums.size(); i++){
            s[nums[i]] = i;
        }

        for (int i = 0 ; i < nums.size(); i++){
            int toFind = target-nums[i];
            if (s.count(toFind) && s[toFind] != i){
                return {i,s[toFind]};
            }
        }

        return {};
    }
};
