class Solution {
public:
    int distributeCandies(vector<int>& v) {
        unordered_set<int> set (v.begin(), v.end());
        return min(set.size(), v.size() / 2); }
};