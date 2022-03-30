class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int target) {
      for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
          if(v[i][j]==target){
            return true;
          }
        }
      } 
      return false;
    }
};