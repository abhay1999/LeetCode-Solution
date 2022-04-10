class Solution {
public:
    bool ispalin( string s)
    {
        int n= s.size();
        int i=0; int j=n-1;
        while(i<=j){
            if(s[i]!=s[j]) return false;
            else {
                i++;
                j--;
            }       
        }
        return true;
    }
    
    string longestPalindrome(string s) {
        int n = s.size();
        int start=0,end=1;
        
        for(int i=1;i<s.size();i++)
        {
            int l=i-1;
            int h=i;
            while(l>=0 && h<s.length() && s[l]==s[h])
            {
                if(h-l+1>end){
                    start= l;
                    end= h-l+1;
                }
                l--;
                h++;
            }
            
             l=i-1;
             h=i+1;
            while(l>=0 && h<s.length() && s[l]==s[h])
            {
                if(h-l+1>end){
                    start= l;
                    end= h-l+1;
                }
                l--;
                h++;
            }
        }
        string ans= s.substr(start,end);
        return ans;
      
    }
};
