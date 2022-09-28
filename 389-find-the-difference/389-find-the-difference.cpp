class Solution {
public:
    char findTheDifference(string s, string t) {
        int arr1[26]={0},arr2[26]={0};
        char ch = 'a';
     
        for(int i=0;i<s.length();i++){
            int index = s[i] - ch;
            arr1[index] += 1;
        }
        for(int i=0;i<t.length();i++){
            int index = t[i] - ch;
            arr2[index] += 1;
        }
        for(int i=0;i<26;i++){
            cout<<arr1[i]<<" "<<arr2[i]<<endl;
           if(arr1[i] != arr2[i])
               return ch+i;
        } 
    return 0;}
};