class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > 0)
                mp[nums[i]]++;
        }
        
        for(int i=1; i<=mp.size(); i++){
            if(mp.find(i) == mp.end()){
                return i;
            }
        }
        if(mp.size() != 0){
            return mp.size()+1;
        }
        else
            return 1;
    }
};