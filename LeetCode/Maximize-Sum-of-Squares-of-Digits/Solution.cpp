class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum>9*num)return "";
        string res="";
        for(int i=0;i<num;i++){
            int dg=min(9,sum);
            res+=('0'+dg);
            sum-=dg;
        }
        return res;
    }
};