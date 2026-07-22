1class Solution {
2public:
3    void reverseString(vector<char>& N) {
4        int st = 0, end = N.size()-1;
5
6        while(st <end){
7            swap(N[st++], N[end--]);
8        }
9    }
10};