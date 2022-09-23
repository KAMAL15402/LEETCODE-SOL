class Solution {
public:
    int concatenatedBinary(int n) {
     long long int a = 0;
        int i = 1;
        while(i<=n){
            a = (( a << (1+int(log2(i))))%1000000007 + i)%1000000007   ;
            i += 1;
        }
   return a; }
};