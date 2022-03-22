class Solution {
public:
    string getSmallestString(int n, int k) {
        vector<char> ans(n);
      for(int i=0;i<n;i++){
        ans[i]='a';k--;
      }
      int idx=n-1;
      while(k>=26){
        ans[idx]='z';
        k-=25;idx--;
      }
      ans[idx]=(char)(k+'a');
      string s="";
      for(auto i:ans){
        s+=i;
      }
      return s;
    }
};