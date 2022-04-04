class Solution {
public:
    void findall(string current, int o,int c, vector<string> &res, int n)
    {
        if(current.length()==2*n) {res.push_back(current);
                                   return;}
        if(o<n) findall(current+'(', o+1,c,res,n);
        if(c<o) findall(current+')', o,c+1,res,n);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        int o=1,c=0;
        findall("(",o,c,res,n);
        return res;
    }
};
