#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) {
            return "";
        }
        
        // Start by assuming the first string is the common prefix
        string prefix = strs[0];
        int i = 1;
        
        // Iterate through the remaining strings using an indexed loop
        while (i < strs.size()) {
            // Shorten the prefix until the current string starts with it
            // .find(prefix) == 0 means the string starts with the prefix
            while (strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.length() - 1);
                
                // If the prefix becomes empty, there is no common prefix
                if (prefix.length() == 0) {
                    return "";
                }
            }
            i++;
        }
        
        return prefix;
    }
};