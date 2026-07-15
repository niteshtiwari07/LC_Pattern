1class Solution {
2public:
3    int gcdOfOddEvenSums(int n) {
4        long long sumOdd = 1LL * n * n;
5        long long sumEven = 1LL * n *(n + 1);
6
7        return gcd(sumOdd, sumEven);
8    }
9};