class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
       int s= a.size();
        int m= b.size();
        vector<int> v(s+m);
        
        merge(a.begin(),a.end(),b.begin(),b.end(),v.begin());
     
      
       // sort(v.begin(), v.end());
        
        int n = v.size();
       // int m= n/2;
        
        double res;
        if((n)%2==0)
        {
            res = (v[n/2]+v[(n/2)-1])/2.0;}
           
        else 
        {
            res = (v[n/2]);
        } 
        
        
       return res;
    }
};
