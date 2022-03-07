class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
      bool dec=false,inc=false;
        for(int i=0;i<arr.size()-1;i++){
          if(arr[i]==arr[i+1]){
            return false;
          }
          else{
            if(arr[i]<arr[i+1]){
              if(!(dec)){
                inc=true;
              }
              else{
                return false;
              }
            }
            else{
              if(inc){
                dec=true;
              }
              else{
                return false;
              }
            }
          }
        }
      return inc & dec;
    }
};