1class Solution {
2public:
3    void reverseString(vector<char>& s) {
4        int st = 0, end = s.size()-1;
5
6        while(st < end){
7            swap(s[st++], s[end--]);
8        }
9    }
10};