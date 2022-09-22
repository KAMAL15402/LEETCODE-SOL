class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int n= nums.size(),maxi=0,sum=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                sum += 1;
            }else{
                maxi = max(sum,maxi);
                sum = 0;
            }
            
        }
        maxi = max(sum,maxi); 
    return maxi;}
};