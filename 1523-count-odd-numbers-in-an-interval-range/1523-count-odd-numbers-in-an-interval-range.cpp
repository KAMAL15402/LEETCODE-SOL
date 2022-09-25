class Solution {
public:
    int countOdds(int low, int high) {
      int ans =0;
        if(low % 2 == 0){
            low ++;
        }
    while(low <= high){
        if(low%2==1){
            ans += 1;
        }
        low += 2;
    }
        return ans;
    }
};