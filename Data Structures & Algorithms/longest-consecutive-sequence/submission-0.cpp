class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set;

        for (int num: nums){
            set.insert(num);
        }
        int count = 0;
        int maxCount = 0;
        for (int num: nums){
            count = 0;
            if (set.find(num -1) == set.end()){
                //New seq about to start
                int currNum = num;
                while(set.find(currNum) != set.end()){
                    count++;
                    currNum++;
                }
            }
            maxCount = max(maxCount,count);
        }
        return maxCount;
    }
};
