1class Solution {
2public:
3    void findCombinations(int idx, vector<int>& candidates, int target, vector<int>& current, vector<vector<int>>& ans) {
4        if (target == 0) {
5            ans.push_back(current);
6            return;
7        }
8        if (target < 0 || idx == candidates.size()) {
9            return;
10        }
11        current.push_back(candidates[idx]);
12        findCombinations(idx, candidates, target - candidates[idx], current, ans);
13        current.pop_back();
14        findCombinations(idx + 1, candidates, target, current, ans);
15    }
16
17    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
18        vector<vector<int>> ans;
19        vector<int> current;
20        findCombinations(0, candidates, target, current, ans);
21        return ans;
22    }
23};
24