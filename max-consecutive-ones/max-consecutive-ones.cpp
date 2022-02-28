#include<bits/stdc++.h>
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,maxm=0;
      for(int i=0;i<nums.size();i++){
        count=0;
        while(i<nums.size() && nums[i]==1){
          count++;
          
          i++;
        }
        maxm=max(maxm,count);
      }
      return maxm;
    }   
};