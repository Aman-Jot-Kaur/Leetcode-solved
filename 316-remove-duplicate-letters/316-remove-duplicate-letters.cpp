class Solution {
public:
    string removeDuplicateLetters(string s) {
         
        int count[26]={0};//stores the frequency of characters
        int visited[26]={0};//visited characters
        int n=s.length();
        
        //stores count of each character
        for(int i=0;i<n;i++){
            count[s[i]-'a']++;
        }
        string res="";
        for(int i=0;i<n;i++){
           
            count[s[i]-'a']--;
           
            if(!visited[s[i]-'a']){
                
                while(res.length()>0 && res.back()>s[i] && count[res.back()-'a']>0){
                   
                    visited[res.back()-'a']=0;
                    res.pop_back();
                }
                
                res+=s[i];
                visited[s[i]-'a']=1;
            }
        }
        return res;
    }
};