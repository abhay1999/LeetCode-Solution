class Solution {
public:
    bool isPalindrome(int x) {
        long long t=x;
        long long p=0;
        while(x>0)
        {
            p= p*10 +x%10;
            x=x/10;
        }
       // cout<<p;
       if(p!=t) return false;
       
      return true;
    }
};
