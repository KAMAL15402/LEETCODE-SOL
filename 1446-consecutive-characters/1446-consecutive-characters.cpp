class Solution {
public:
    int maxPower(string s) {
        int ans=1,sum=1;
        if(s.length()==0)
            return 0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]==s[i+1]){
                sum++;
                
            }else{
                ans = max(sum,ans);
                sum=1;
            }
        }
         ans = max(sum,ans);
   return ans; }
};