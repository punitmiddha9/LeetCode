class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int, int>> pq;
        vector<int> v;
        for(auto [key, value] : mp){
            pq.push(make_pair(value, key));
        }
        
        while(k--){
            v.push_back(pq.top().second);
            pq.pop();            
        }
        return v;
    }
};