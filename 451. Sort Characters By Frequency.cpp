class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> m;
        for(auto c:s)
        {
            m[c]++;
        }
        priority_queue<pair<int,char>> p;
        for(auto x:m){
            p.emplace(x.second,x.first);
        }
        string ans={};
        while(!p.empty()){
            int d =p.top().first;
            while(d!=0){
            ans+=p.top().second;
                d--;
            }
            p.pop();
        }
        return ans;
    }
};
