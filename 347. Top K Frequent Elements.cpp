class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector <int> ans;
        unordered_map<int,int> m;
        for(auto & c: nums  ) m[c]++;
        
        priority_queue<pair<int,int>> p;
        for(auto& x:m) p.emplace(x.second, x.first);
        
        while(k--){
            ans.push_back(p.top().second);
            p.pop();
        }
        return ans;
        
    }
};
