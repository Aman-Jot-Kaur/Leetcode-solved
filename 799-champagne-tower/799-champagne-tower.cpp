class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
      vector<vector<double>> a(101, vector<double>(101));
      int i=0;
      a[0][0]=poured;
       while(i<100) {
         for(int j=0;j<=i;j++){
           if(a[i][j]>=1){
             a[i + 1][j]+= (a[i][j] - 1)/ 2.0;
a[i + 1][j + 1] +=(a[i][j] - 1) / 2.0;
               a[i][j] = 1;
           }
         }
         i++;
       }
      return  a[query_row][query_glass];
    }
};