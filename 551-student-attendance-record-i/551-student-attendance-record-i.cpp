class Solution {
public:
    bool checkRecord(string s) {
        int a=0,c=0;
        for(int i = 0 ;i<s.length();i++){
            if(s[i]=='A'){
                a++;
                if(a>1)
                    return false;
            }
            if(s[i]=='L'){
                c++;
                if(c>2)
                    return false;
            }else
                c=0;
        }
    return 1;}
};