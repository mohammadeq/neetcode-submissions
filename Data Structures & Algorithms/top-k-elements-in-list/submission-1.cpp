class Solution {
public:
    // Brute-force solution for now. Optimization coming soon, insha'Allah!
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequency_nums;
        priority_queue<pair<int, int>> most_frequent;
        vector<int> result;
        for(int num: nums)
            frequency_nums[num]++;
        
        for(auto it = frequency_nums.begin(); it != frequency_nums.end(); ++it){
            most_frequent.push({it->second, it->first});
        }
        for(int i =0; i < k; i++){
            result.push_back(most_frequent.top().second);
            most_frequent.pop();
        }
        return result;
    }
};
