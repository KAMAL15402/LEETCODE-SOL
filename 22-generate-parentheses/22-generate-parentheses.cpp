class Solution {
public:
    void solve(vector <string>& ans , int o , int c,int n,string s){
        if(o==n && c==n){
            ans.push_back(s);
            return ;
        }
        if(o<n){
            
            solve(ans,o+1,c,n,s+"(");
        }
        if(c<o){
           
            solve(ans,o,c+1,n,s+")");
        }
            
    }
    vector<string> generateParenthesis(int n) {
        vector <string> ans ;
        solve(ans,0,0 ,n,"");
    return ans;}
};