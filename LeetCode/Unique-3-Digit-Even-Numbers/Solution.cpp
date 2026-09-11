class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int> freq(10, 0);

        // Count how many times each digit appears.
        for (int d : digits) {
            freq[d]++;
        }

        int ans = 0;

        // Try every possible three-digit number.
        for (int num = 100; num <= 999; num++) {

            // A three-digit even number must end in an even digit.
            if (num % 2 != 0) {
                continue;
            }

            int x = num;

            int a = x / 100;       // hundreds digit
            int b = (x / 10) % 10; // tens digit
            int c = x % 10;        // units digit

            // Temporarily use the digits.
            freq[a]--;
            freq[b]--;
            freq[c]--;

            // If all frequencies are non-negative,
            // this number can be formed.
            if (freq[a] >= 0 && freq[b] >= 0 && freq[c] >= 0) {
                ans++;
            }

            // Restore the frequencies.
            freq[a]++;
            freq[b]++;
            freq[c]++;
        }

        return ans;
    }
};