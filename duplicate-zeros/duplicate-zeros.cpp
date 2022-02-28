class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
      int n=arr.size();
       for(int i=arr.size()-1;i>=0;i--){
         if(arr[i]==0 && i!=arr.size()-1){
           for(int j=arr.size()-1;j>i;j--){
             if(j<arr.size()-1){
               arr[j+1]=arr[j];
             }
             
           }
           arr[i+1]=0;
         }
       }
        }
    
};