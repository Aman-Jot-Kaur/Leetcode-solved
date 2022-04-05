class Solution {
public:
    int maxArea(vector<int>& v) {
      int left=0,right=v.size()-1;
      int maxm=0;
      while(left<right){
        
        int h=min(v[left],v[right]);
        int w=right-left;
        maxm=max(maxm,h*w);
        if(v[left]<v[right]){
          left++;
        }
        else{
          right--;
        }
        
      }
      return maxm;
    }
};