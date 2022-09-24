class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
            int ans = 0, n = nums.size();
        int c = 0, l = 0, r = 0;
        while (r < n) {
             if(nums[r] == 0)
                 c += 1;
            if (c > k) {
                 if (nums[l++] == 0)
                     c -= 1;
            }
            ans = r - l + 1;
            r++;
        }
        return ans;
    }
};