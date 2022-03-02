class Solution {
public:
    bool isSubsequence(string s, string t) {
        string check="";
      int j=0;
      for(int i=0;i<t.size();i++){
        if(t[i]==s[j]){
          check+=t[i];
          j++;
        }
        if(j==s.size()){
          break;
        }
      }
      if(check==s){
        return true;
      }
      return false;
    }
};