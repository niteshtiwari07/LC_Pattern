1class Solution {
2public:
3    int maximumProduct(vector<int>& nums) {
4        int n = nums.size();
5        sort(nums.begin(),nums.end());
6        
7        int v1 = nums[n-1] * nums[n-2] * nums[n-3];
8        int v2 = nums[n-1] * nums[0] * nums[1];
9        
10       return(max(v1,v2));
11    }
12};