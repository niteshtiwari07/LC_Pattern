class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0, lastLength = 0;
        for (char c : s) {
            if (c != ' ') {
                length++;
                lastLength = length;   
            } else {
                length = 0;
            }
        }
        return lastLength;
    }
};