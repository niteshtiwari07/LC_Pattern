class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> suffixMin(n);
        int prefixMax = 0;
        int diff = 0;
        int currentMin = nums[n - 1];

        for (int i = n - 1; i >= 0; i--) {
            currentMin = min(nums[i],currentMin);
            suffixMin[i] = currentMin;
        }
        for (int i = 0; i < n; i++) {

            prefixMax = max(nums[i], prefixMax);

            diff = abs(prefixMax - suffixMin[i]);
            if (diff <= k)
                return i;
        }

        return -1;
    }
};