class Solution {
public:
    int uniquePaths(int m, int n) {
        int turns=n+m-2;
      int r=m-1;
  double res=1;
      for(int i=1;i<=r;i++){
        res=res*(turns-r+i)/i;
      }
    return int(res);}
};