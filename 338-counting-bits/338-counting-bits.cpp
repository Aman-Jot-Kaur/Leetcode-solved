class Solution {
public:
    vector<int> countBits(int n) {
      vector<int> v;
      for(int i=0;i<=n;i++){
        if(i<2){
          v.push_back(i);
          continue;
        }
        if(i%2==0){
          v.push_back(v[i/2]);
        }
        else{
          v.push_back(v[i-1]+1);
        }
      }
      return v;
    }
  
};