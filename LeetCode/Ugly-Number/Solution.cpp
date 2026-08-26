1class Solution {
2public:
3    bool isUgly(int n) {
4        if (n <= 0) return false;
5        while(n > 1)
6        {
7            if (n % 2 == 0) n = n / 2;
8            else if (n % 3 == 0) n = n / 3;
9            else if (n % 5 == 0) n = n / 5;
10            else break;
11        }
12        return (n == 1);
13    }
14};