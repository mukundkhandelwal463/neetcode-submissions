class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start  = 0;
        int end = nums.size() - 1;
        int first  = -1;
        int last = -1;
        while(start<=end){
            int mid = start + (end-start);
            if(nums[mid]==target){
                first = mid;
                end = mid-1;
                
            }else if(nums[mid]>target){
                end=mid-1;
            }else{
                start = mid+1;
            }
        }
        start  = 0;
        end = nums.size() - 1;

        while(start<=end){
            int mid = start + (end-start);
            if(nums[mid]==target){
                last = mid;
                start= mid+1;
                
            }else if(nums[mid]>target){
                end=mid-1;
            }else{
                start = mid+1;
            }
        }
        vector<int> vec(2);
        vec[0]=first;
        vec[1]= last;
        return vec;
    }
};