#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            numSet.insert(nums[i]);
        }
        
        int longest = 0;
        for (int i = 0; i < n; i++) {
            int currentNum = nums[i];
            if (numSet.find(currentNum - 1) == numSet.end()) {
                int currentLength = 1;
                
                while (numSet.find(currentNum + currentLength) != numSet.end()) {
                    currentLength++;
                }
                
                longest = max(longest, currentLength);
            }
        }
        
        return longest;
    }
};
