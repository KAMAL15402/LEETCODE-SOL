class Solution {
public:
    int maxArea(vector<int>& height) {
     int i=0,j=height.size()-1,ans;
        while(i<j){
            int water = min(height[i],height[j]) * (j-i);
            cout<<water<<endl;
            ans = max(ans , water);
            if(height[i]<=height[j]){
                i++;
            }else
                j--;
        }
   return ans; }
};