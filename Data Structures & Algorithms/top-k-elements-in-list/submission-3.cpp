class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>>v1;
        for(auto x : mp) {
            v1.push_back({x.second, x.first});
        }
        sort(v1.rbegin(),v1.rend());
        vector<int> ans;
        for(int i = 0; i < k; i++) {
            ans.push_back(v1[i].second);
        }

        return ans;
    }   
};