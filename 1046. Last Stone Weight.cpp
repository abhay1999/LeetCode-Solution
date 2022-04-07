class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
       int n= stones.size();
        if(n==1) return stones[0];
        sort(stones.begin(), stones.end());
        while(n>=2)
        {
            stones[n-2]= stones[n-1] - stones[n-2];
            n--;
            sort(stones.begin(), stones.begin()+n);
        }
        return stones[0];
    }
};
