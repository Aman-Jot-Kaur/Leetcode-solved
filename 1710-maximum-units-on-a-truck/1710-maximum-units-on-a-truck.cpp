class Solution {
public:
    int maximumUnits(vector<vector<int>>& box, int size) {
        sort(begin(box),end(box),[](auto &a,auto &b){return a[1]>b[1];});
       int ans=0;
      for(auto i:box){
        if(size<=0) break;
      ans+= min(size, i[0]) * i[1];
        size-=i[0];
        
      }
      return ans;
    }
};