class Solution {
public:
    int mySqrt(int x) {
        int l=0; int r=x;
        int ans=-1;
        while(l<=r)
        {
            long long int m= (l+r)/2;
            if(m*m>=x)
            {
                if(m*m==x) return m;
                else r= m-1;
            }
            else {
                ans=m;
                l=m+1;
        }}
            return ans;
    }
};
