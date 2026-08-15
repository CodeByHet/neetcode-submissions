class Solution {
public:
struct cmp{
    bool operator()(pair<int,int>&p,pair<int,int>&q){
        if(p.second!=q.second){
            return p.second>q.second;
        }
        return p.first>q.first;
    }
};
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int>mp;
    priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    if(k<=0){
        return {};
    }
  for(auto it:mp){
    if(pq.size()<k){
        pq.push({it.first,it.second});
    }
    else{
        if(it.second>pq.top().second||((it.second==pq.top().second)&&(it.first>pq.top().first))){
            pq.pop();
            pq.push({it.first,it.second});
        }
    }
  }
  vector<int>ans;
  while(!pq.empty()){
    ans.push_back(pq.top().first);
    pq.pop();
  }
  return ans;
    }
};
