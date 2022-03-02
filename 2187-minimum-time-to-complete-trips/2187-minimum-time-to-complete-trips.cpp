class Solution {
  private:
 long long tripsdone(vector<int> &time,long long scnd){
   long long count=0;
   for(auto it:time){
     count+=scnd/it;
   }
   return count;
 }
public:
    long long minimumTime(vector<int>& time, long long totalTrips) {
        long long low=0,high=1e14;
      long long ans=high;
      while(low<=high){
        long long mid=(low+high)/2;
        if(tripsdone(time,mid)>=totalTrips){
          ans=mid;
          high=mid-1;
        }
        else{
          low=mid+1;
        }
      }
      return ans;
    }
};