class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      vector<int> ans;
      unordered_map<int,int> mp;
      for(int i:nums){
        mp[i]++;
      }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> minHeap;
      for(auto i:mp){
        minHeap.emplace(i.second,i.first);
        if(minHeap.size() > k) {
          minHeap.pop();
      }
      }
      while(k--){
         ans.push_back(minHeap.top().second);
         minHeap.pop();
      }
      return ans;
    }
};