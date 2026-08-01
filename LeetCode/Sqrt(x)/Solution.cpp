1class Solution {
2public:
3    int mySqrt(int x) {
4        if (x == 0 || x == 1) return x;
5        int left = 1, right = x, ans = 0;
6        while (left <= right) {
7            long long mid = left + (right - left) / 2;
8            if (mid * mid == x) return mid;
9            if (mid * mid < x) {
10                ans = mid;
11                left = mid + 1;
12            } else {
13                right = mid - 1;
14            }
15        }
16        return ans;
17    }
18};
19