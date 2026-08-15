class Solution {
public:
    int trap(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int maxleft=height[l];
        int maxright=height[r];
        int sum=0;
        while(l<r){
            if(maxleft<maxright){
                l++;
                maxleft=max(maxleft,height[l]);
                sum+=maxleft-height[l];
            }else{
                r--;
                maxright=max(maxright,height[r]);
                sum+=maxright-height[r];
            }
        }
        return sum;
    }
};
