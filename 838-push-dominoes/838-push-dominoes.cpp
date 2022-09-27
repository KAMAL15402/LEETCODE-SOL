class Solution {
public:
    string pushDominoes(string dominoes) {
        int n = dominoes.size();
        vector <int> left(n,0) , right(n,0);
        char pre = '.';
        int c = 1;
        for(int i = 0 ;i<n ; i++){
            if(dominoes[i]=='R'){
                pre = 'R';
                c = 1;
                continue;
            }else if(dominoes[i]=='L')
                pre = 'L';
            
            if(pre=='R' && dominoes[i]=='.'){
                right[i]=c;
                c++;
            }
        }
        
        
       pre = '.';
       c = 1;
        for(int i = n-1 ;i>=0 ; i--){
            if(dominoes[i]=='L'){
                pre = 'L';
                c = 1;
                continue;
            }else if(dominoes[i]=='R')
                pre = 'R';
            
            if(pre=='L' && dominoes[i]=='.'){
                left[i]=c;
                c++;
            }
        }
        
        string ans = "";
        for(int i=0;i<n;i++){
            if(left[i]==0 && right[i]==0){
                ans += dominoes[i];
            }
            else if(left[i]==0){
                ans += 'R';
            } else if(right[i]==0){
                ans += 'L';
            } else if(left[i] == right[i]){
                ans += '.';
            }  else if (left[i]<right[i]){
                ans += 'L';
            }
            else {
                ans += 'R';
            }
        }
        
    return ans;}
};