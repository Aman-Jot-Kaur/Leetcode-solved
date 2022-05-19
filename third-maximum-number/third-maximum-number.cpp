class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> ans;
      for(int n:nums){
        ans.insert(n);
        if(ans.size()>3){
          ans.erase(ans.begin());
          
        }
      }
      return ans.size()==3?*ans.begin():*ans.rbegin();
    }
};