class Solution {
public:
    vector<int> twoSum(const vector<int>& nums, int target) {
        unordered_map<int, int> difference;

        int index1 = 0;
        for (int i : nums) {
            difference[target - i] = index1++;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (difference.count(nums[i]) &&
                difference[nums[i]] != i) {

                return {i, difference[nums[i]]};
            }
        }

        return {};
    }
};