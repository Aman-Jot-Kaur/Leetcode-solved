class Solution {
public:
    int longestPalindrome(vector<string>& words) {
    map<string,int> mp;
      for(int i=0;i<words.size();i++){
        mp[words[i]]++;
      }
      int res=0;
      bool chk=false;
      for(auto x:mp){
        string s=x.first;
        string t=s;
        reverse(s.begin(),s.end());
        if(s==t){
          res+=x.second/2;
          if(x.second%2){
            chk=true;
          }}
          else{
            if(mp.count(s)){
              res+=min(x.second,mp[s]),mp.erase(s);
              
            }
          
        }
      }
      res=res*4;
      if(chk){
        res+=2;
      }
      return res;
    }
};