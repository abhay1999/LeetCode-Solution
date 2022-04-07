class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m1,m2;
        
        for(auto& i : nums1)
        {
          m1[i]++;  
        }
         for(auto& i : nums2)
        {
          m2[i]++;  
        }
        for(auto& i : m1)
        {
          i.second= min (i.second, m2[i.first]);  
        }
        vector <int> ans;
        int a;
        for(auto& i : m1)
        {
            if(i.second>=1)
            {
               a= i.first;
                ans.push_back(a);
               // i.second--;
            }
        }
        return ans;
    }
};
