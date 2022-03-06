class Solution {
public:
    int countOrders(int n) {
      vector<long long> dp(n);
      if(n==1){
        return 1;
      }
      dp[0]=1;
    
      for(int i=1;i<n;i++){
        long long gap=i*2+1;
      
        long long ways=(gap*gap)-(gap*(gap-1))/2;
        dp[i]=(dp[i-1]*ways)%1000000007;
        
      }
      return int(dp[n-1]);
    }
};