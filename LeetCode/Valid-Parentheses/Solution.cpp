1class Solution {
2public:
3    bool isValid(string str) {
4        stack<char> st;
5
6        for(int i=0; i<str.size();i++){
7            if(str[i] == '(' || str[i] == '{' ||str[i] =='['){
8                st.push(str[i]);
9            }else{
10                if(st.size() == 0){
11                    return false;
12                }
13
14                if((st.top() =='(' && str[i] == ')') ||
15                   (st.top() =='{' && str[i] == '}') ||
16                   (st.top() =='[' && str[i] == ']')) {
17                    st.pop();
18                }else{
19                    return false;
20                }
21            }
22        }
23            return st.size() ==0;
24    }
25};