class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(auto i=nums.begin();i!=nums.end();++i){
          while(i!=nums.end()-1 && *i==*(i+1)){
            nums.erase(i);
          }
        }
      return nums.size();
    }
};