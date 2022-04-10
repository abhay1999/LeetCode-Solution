class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int cnt=0;
        string sub= {};
        int curr_cnt=0;
        int y=1;
        for(int i=0; i<s.length(); i++)
        {      
                if(sub.find(s[i])!=string::npos)
                {         i=y;
                     int z= sub.size();
                          cnt= max(cnt,z);
                            sub={};
                 y++;}
                 
                        
                
             sub+=s[i];
                       
                    
                    
        }
         int x= sub.size();
        cnt= max(cnt, x);
        return cnt;
    }
};
