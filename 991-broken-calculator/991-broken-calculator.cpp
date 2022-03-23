class Solution {
public:
    int brokenCalc(int s, int target) {
       int ans=0;
      while(s<target){
       if(target%2==0){
         target=target/2;
       }
        else{
          target+=1;
        }
        ans++;
      }
      return ans+(s-target);
    }
};