class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freqMap;
        vector<vector<int>> freq(nums.size() + 1);

        for (auto num : nums){
            freqMap[num]++;
        }

        for (const auto& entry : freqMap){
            freq[entry.second].push_back(entry.first);
        }

        vector <int> result;
        for (int i = freq.size() - 1; i > 0 ; --i){
            for (int n: freq[i]){
                result.push_back(n);
                if (result.size() == k){
                    return result;
                }
            }
        }

        return result;
       
    }
};
