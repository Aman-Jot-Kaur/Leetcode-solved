class Solution {
public:
    void reverseString(vector<char>& v) {
        for(int i=0;i<v.size()/2;i++){
          
          char temp=v[i];
          v[i]=v[v.size()-1-i];
          v[v.size()-1-i]=temp;
        }
    }
};