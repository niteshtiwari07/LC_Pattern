1class Solution {
2public:
3    vector<int> twoSum(vector<int>& arr, int tar) {
4        unordered_map<int, int>m;
5        vector<int> ans;
6
7        for(int i = 0;i<arr.size();i++){
8            int first = arr[i];
9            int sec = tar - first;
10
11            if(m.find(sec) != m.end()){
12                ans.push_back(i);
13                ans.push_back(m[sec]);
14                break;
15            }
16            m[first]=i;
17        }
18        return ans;
19    }
20};