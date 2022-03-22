class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char,int> mp;
      for(int i=0;i<s.length();i++){
        char ch=s[i];
        mp[ch]=i;
      }
      vector<int> result;
      int prev=-1;
      int maxm=0;
      for(int i=0;i<s.length();i++){
       
        char ch=s[i];
         maxm=max(maxm,mp[ch]);
        if(maxm==i){
          result.push_back(maxm-prev);
          prev=maxm;
        }
      }
      return result;
    }
};