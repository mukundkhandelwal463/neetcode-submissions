class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());

        vector<int> ans;
        
        for(auto i = set1.begin(); i != set1.end(); i++){
            if(set2.find(*i) != set2.end()){
                ans.push_back(*i);
            }
       }
        return ans;
    }
};