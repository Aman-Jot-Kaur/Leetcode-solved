class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
      if(nums.size()<3){
        return 0;
      }  
      int ans=0;
      int counting=0;
      int diff=nums[1]-nums[0];
      for(int i=2;i<nums.size();i++){
        if(nums[i]-nums[i-1]==diff){
          counting++;
          
        }
        else{
          counting=0;
          diff=nums[i]-nums[i-1];
        }
        ans+=counting;
      }
      return ans;
    }
};