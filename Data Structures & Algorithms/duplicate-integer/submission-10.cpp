class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        int j=0;
        bool ans =false;
        sort(nums.begin(), nums.end());
        
        for(int i=1;i<n;i++){
            if(nums[j]==nums[i]){
                ans = true;
            }else{
                j++;
            }
        }
        return ans;
    }
};