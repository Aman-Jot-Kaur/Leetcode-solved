class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
      vector<string> ans;
      if(nums.size()==0){
        return ans;
      }
      if(nums.size()==1){
        ans.push_back(to_string(nums[0]));
        return ans;
      }
       if(nums.size()==2){
        if(nums[1]-nums[0]==1){
        string s=to_string(nums[0])+"->"+ to_string(nums[1]);
        ans.push_back(s);
        return ans;
      }
         else{
           ans.push_back(to_string(nums[0]));
           ans.push_back(to_string(nums[1]));
           return ans;
         }}
        for(int i=0;i<nums.size();i++){
          if(i==nums.size()-1 || (nums[i]+1)!=nums[i+1]){
            string s=to_string(nums[i]);
            ans.push_back(s);
          }
          
          else{
            int j=nums[i];
            while(i<nums.size()-1 && (nums[i]+1)==nums[i+1]){ 
             
              ++i;
            }
            string s=to_string(j)+"->"+ to_string(nums[i]);
            ans.push_back(s);
          }
        }
          
       return ans; 
    }
};