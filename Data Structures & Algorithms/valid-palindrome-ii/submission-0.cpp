class Solution {
public:
    bool isPalindrome(string s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int a = 0;
        int b = s.size() - 1;

        while (a < b) {
            if (s[a] == s[b]) {
                a++;
                b--;
            } else {
                return isPalindrome(s, a + 1, b) || isPalindrome(s, a, b - 1);
            }
        }

        return true; 
    }
};