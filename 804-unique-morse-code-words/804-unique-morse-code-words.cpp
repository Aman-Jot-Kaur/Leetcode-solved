class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
    set<string> setstring;
  string morse[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
  for(int i=0;i<words.size();i++){
    string s=words[i];
    string ans="";
    for(int j=0;j<s.length();j++){
    int n=int(s[j]);
    ans+=morse[n-97];
  }
    setstring.insert(ans);
  }
    
  int n=setstring.size();
  return n;}
};