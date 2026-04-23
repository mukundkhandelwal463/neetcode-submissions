class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> counts;

        // 1. Count frequencies using a standard loop
        for (int i = 0; i < n; i++) {
            counts[nums[i]]++;
        }

        // 2. Create buckets where index = frequency
        // We use n + 1 because an element can appear up to n times
        vector<vector<int>> buckets(n + 1);
        
        // Using an iterator to loop through the map
        for (auto it = counts.begin(); it != counts.end(); ++it) {
            int element = it->first;
            int frequency = it->second;
            buckets[frequency].push_back(element);
        }

        vector<int> result;
        for (int i = n; i >= 0; i--) {
            for (int j = 0; j < buckets[i].size(); j++) {
                result.push_back(buckets[i][j]);
                
                if (result.size() == k) {
                    return result;
                }
            }
        }

        return result;
    }
};