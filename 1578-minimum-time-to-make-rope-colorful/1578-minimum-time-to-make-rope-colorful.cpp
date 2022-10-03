class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int i=0,j=0;
        int t=0,n=neededTime.size();
        while(i<n && j<n){
            int a=0 ,b=0;
            while(j<n && colors[j]==colors[i]){
                a = max(a,neededTime[j]);
                b += neededTime[j];
                j++;
            }
            i=j;
            t += (b-a);
        }
        return t;
    }
};