class Solution {
public:
    vector<int> twoSum(const vector<int>& nums, int target) {
        unordered_map<int, int> difference;
        for(int i=0; i<nums.size(); i++){
            auto it = difference.find(nums[i]);
            if(it != difference.end()){
                return {it->second, i};
            }

            difference[target -nums[i]] = i;

        }
        
        
    }
};  