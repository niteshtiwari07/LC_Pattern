1class Solution {
2public:
3    int maxProduct(int n) {
4        string s = to_string(n);
5
6        sort(s.begin(), s.end());
7        int m = s.size();
8        return (s[m-1]-'0') * (s[m-2]-'0');
9    }
10};