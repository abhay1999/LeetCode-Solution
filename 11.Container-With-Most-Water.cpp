class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int area =INT_MIN;
        int res=0;
       int i=0; int j=n-1;
        while(i<j){
         if(height[i]<height[j]){
             res =(j-i)*height[i];
                i++;}
            else {res = (j-i)*height[j];
                j--;}
            area= max(area,res);
        }
        
        return area;
    }
};
