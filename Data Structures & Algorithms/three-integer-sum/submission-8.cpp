class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int l = 0;
        int r = nums.size()-1;
        sort(nums.begin(),nums.end());
        for (int i = 0 ; i< nums.size(); i++){
            if (i>0 && nums[i] == nums[i-1]) continue;
            l = i+1;
            r = nums.size() - 1;

            while(l<r){
                int sum = nums[i] + nums[l] + nums[r];
                if (sum == 0){
                    res.push_back({nums[i],nums[l],nums[r]});
                    while ((l < nums.size() -1) && nums[l] == nums[l+1]) l++;
                    while ((r > 0) && nums[r] == nums[r-1]) r--;
                    l++;
                    r--;
            }
            else if(sum < 0) l++;
            else r--;
        }
    }
    return res;
    }
};
