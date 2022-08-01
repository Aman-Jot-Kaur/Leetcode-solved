class Solution {
public:
  int countpaths(int i,int j,int m,int n,vector<vector<int>> &ans){
    if(i==m-1 || j==n-1){
      return 1;
    }
   else if(i>=m || j>=n){
      return 0;
    }
    else if(ans[i][j]!=-1)
      return ans[i][j];
    else
      return ans[i][j]=countpaths(i+1,j,m,n,ans)+countpaths(i,j+1,m,n,ans);
      
  }
    int uniquePaths(int m, int n) {
       vector<vector<int>> ans(m+1,vector<int>(n+1,-1));
       int answ=countpaths(0,0,m,n,ans);
      return answ;
    }
};