class Solution {
public:
    int trap(vector<int>& height) {
       vector<int>lefty;
       vector<int>righty;
       int left=0;
       int right=0;
       for(int i=0;i<height.size();i++){
        left=max(left,height[i]);
         lefty.push_back(left);
       }
       for(int i=height.size()-1;i>=0;i--){
        right=max(right,height[i]);
        righty.push_back(right);
       }
       reverse(righty.begin(), righty.end());
       vector<int>mini;
       for(int i=0;i<height.size();i++){
  mini.push_back(min(lefty[i],righty[i]));
       }
       int sum=0;
       for(int i=0;i<height.size();i++){
        sum+=(mini[i]-height[i]);
       }
       return sum;
    }
};
