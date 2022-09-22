class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = 0,sum=0;
        int i=0 , n=nums.size();
    while(i<k){
        sum += nums[i];
        i++;
    }
        ans = sum;
   while(i<n){
       sum = sum - nums[i-k] + nums[i];
       ans = max(sum , ans);
       i++;
   }
        cout<<ans;
        ans = ans/k;
        
        return ans;
    }
};