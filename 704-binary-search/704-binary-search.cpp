class Solution {
public:
    int search(vector<int>& num, int target) {
    int low=0;int high=num.size()-1;
      int ans=INT_MAX;
      int mid=(low+high)/2;
      while(low<=high){
      mid=low+(high-low)/2;
        if(target<num[mid]){
          high=mid-1;
        }
       else if(target>num[mid]){
         low=mid+1;
       }
        else if(target==num[mid]){
        ans=mid;
          return mid;
        }
        
      }
      if(ans!=INT_MAX){
        return ans;
      }
      else{
        return -1;
      }
    }
};