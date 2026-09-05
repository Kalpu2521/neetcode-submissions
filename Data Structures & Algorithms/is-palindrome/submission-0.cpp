class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while(left < right) {

            // Left par non-alphanumeric hai
            if(!isalnum(s[left])) {
                left++;
            }
            // Right par non-alphanumeric hai
            else if(!isalnum(s[right])) {
                right--;
            }
            else {
                // Case-insensitive comparison
                if(tolower(s[left]) != tolower(s[right])) {
                    return false;
                }

                left++;
                right--;
            }
        }

        return true;
    }
};