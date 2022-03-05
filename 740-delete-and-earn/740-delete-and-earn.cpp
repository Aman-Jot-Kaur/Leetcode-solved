class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
      int inc=0;
      int exc=0;
      if(nums.size()==1){
        return nums[0];
      }
      vector<int> count(10000,0);
      for(int i:nums){
        count[i]++;
      }
      for(int i=0;i<10000;i++){
        int newadd=exc+count[i]*i;
        int newexc=max(inc,exc);
        inc=newadd;
        exc=newexc;
        
        
      }
      return(max(inc,exc));
    }
};