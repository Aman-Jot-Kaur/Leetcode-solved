class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
     map<double,int> mp;
      for(int i:arr){
        if(mp.count(i*2) || mp.count((double)i/2)){
          return true;
        }
        mp[i]++;
      }
        
      return false;
    }
};