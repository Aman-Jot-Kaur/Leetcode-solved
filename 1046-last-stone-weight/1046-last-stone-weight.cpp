class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
      if(stones.size()==1){
          return stones[0];
        } 
     
      int wt=0;
      for(int i=stones.size()-1;i>0;i--){
         sort(stones.begin(),stones.end());
        if(stones[i]==stones[i-1]){
          stones[i-1]=0;
          wt=0;
        }
        else{
          wt=abs(stones[i]-stones[i-1]);
          stones[i-1]=wt;
        }
      }
      return wt;
    }
};