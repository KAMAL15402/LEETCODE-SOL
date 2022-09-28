class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector <int> ans ;
        int l=1 ,w = area, diff = INT_MAX;
        for (int i=2 ; i<=area/2 ;i++){
            if(area % i == 0){
                 if(diff> abs(i - (area/i)) ){
                    l= i;
                    w = area/i;
                     diff = abs(i - (area/i));
                }
               }
            }
            if (l<w)
           swap(l,w);
 ans.push_back(l);
 ans.push_back(w);                   
                    
return ans;                    
    }
};