class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int max=0;
      int min=10000;
      int n=prices.size();
      int profit=0;
      for(int i=0;i<n;i++){
         
       if(prices[i]<min){
          min=prices[i];
        }
        
        if(prices[i]-min>profit){
          profit=prices[i]-min;
        }
      }
      return profit;
    }
};