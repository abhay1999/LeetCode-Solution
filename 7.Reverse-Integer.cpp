class Solution {
public:
    int reverse(int x) {
        long long p =0;
       
      
        while(x)
        {
            p = p*10 +x%10;
            x/=10;
        }
        
        return p= p>INT_MAX?0:p<INT_MIN?0:p;
       
    }
};
