class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char,int>mp;
        
        for(auto& k:words[0])//traverse one word only for initialization;
        {
            mp[k]++;
        }
        unordered_map<char,int>mp1;
        for(auto& k:words){
            mp1.clear();//after checking one word we have to clear the map1
            for(auto& k1:k){
                mp1[k1]++;
            }
            for(auto& m:mp){
                m.second=min(m.second,mp1[m.first]);
            }
        }
        vector<string>v;
          string s;
        for(auto& k:mp){
          
            while(k.second!=0){
                s=k.first;
                v.push_back(s);
                k.second--;
            }
        }
        return v;
    }
};
