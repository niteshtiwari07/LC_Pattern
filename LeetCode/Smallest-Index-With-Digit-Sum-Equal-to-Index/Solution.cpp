1class Solution {
2public:
3    int smallestIndex(vector<int>& nums) {
4        for(int i = 0; i < nums.size(); i++){
5            int x = nums[i];
6            int sum = 0;
7
8            while(x > 0){
9                sum += x % 10;
10                x /= 10;
11            }
12            if(sum  == i) return i;
13        }
14        return -1;
15    }
16};