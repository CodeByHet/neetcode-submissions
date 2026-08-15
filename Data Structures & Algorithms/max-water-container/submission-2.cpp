class Solution {
public:
    int maxArea(vector<int>& heights) {
        int p=0;
        int q=heights.size()-1;
        int water=0;
        int maxwater=INT_MIN;
        while(p<q){
            int height=min(heights[p],heights[q]);
            int width=(q-p);
            maxwater=max(maxwater,height*width);
            if(heights[p]<heights[q]){
     p++;
            }else{
    q--;                 
            }
        }
        return maxwater;
    }
};
