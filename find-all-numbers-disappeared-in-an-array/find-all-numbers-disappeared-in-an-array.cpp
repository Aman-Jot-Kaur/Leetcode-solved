class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
      vector<int> ans(nums.size()+1,0);
            vector<int> ans2;

        for(int i=0;i<nums.size();i++){
        ans[nums[i]]++;
          
        }
      for(int i=1;i<ans.size();i++){
        if(ans[i]==0){
          ans2.push_back(i);
        }
      }
      return ans2;
    }
};