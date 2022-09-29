class Solution {
public:
    void solve(vector<int>&ans ,int cur , int n){
        if(cur>n){
            return;
        }
        ans.push_back(cur);
        int i= 0;
        if(cur ==0){
            i =1;
        }
        for(;i<=9;i++){
            
            solve(ans,cur*10 + i,n);
        }
    }
    vector<int> lexicalOrder(int n) {
        vector <int> ans;
        solve(ans,0,n);
        ans.erase(ans.begin(),ans.begin()+1);
  return ans;  }
};