class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        priority_queue<int> pq;
        for(auto x : mp){
            pq.push(x.second);
        }
        
        int ans = 0;
        int cnt = 0;
        while(ans < arr.size()/2){
            ans = ans + pq.top();
            cnt++;
            pq.pop();
        }
        return cnt;
    }
};