class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int target) {
      int row=v.size()-1;
      int col=v[0].size()-1;
      //for rows;
     
      int start=0;
      int end=row;
      int finalrow=0;
     
      while(start<=end){
        int mid=start+(end-start)/2;
        if(v[mid][0]<=target && v[mid][col]>=target){
          finalrow=mid;
          break;
        }
        else if(v[mid][0]>target){
          end=mid-1;
         
        }
        else{
start=mid+1;
        }
     }
    start=0;
      end=col;
    
      while(start<=end){
        int mid=start+(end-start)/2;
        if(v[finalrow][mid]>target){
          end=mid-1;
        }
        else if(v[finalrow][mid]<target){
          start=mid+1;
        }
        else{
          return true;
        }
      }
      
     return false; 
    }
};