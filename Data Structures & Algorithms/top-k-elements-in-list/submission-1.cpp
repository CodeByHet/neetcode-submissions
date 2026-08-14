class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        vector<pair<int,int>> freq;
        unordered_map<int,int> count;

        for(int i = 0; i < nums.size(); i++) {
            count[nums[i]]++;
        }

        for(auto it : count) {
            freq.push_back({it.first, it.second});
        }

        sort(freq.begin(), freq.end(), [](pair<int,int>& a, pair<int,int>& b) {
            return a.second > b.second;
        });

        vector<int> ans;

        for(int i = 0; i < k; i++) {
            ans.push_back(freq[i].first);
        }

        return ans;
    }
};