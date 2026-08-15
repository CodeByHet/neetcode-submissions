class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<int>temp;
        set<vector<int>>st;
        sort(nums.begin(),nums.end());
        int j;
        int k;
        for(int i=0;i<nums.size();i++){
          j=i+1;
          k=nums.size()-1;
          int sum_required=-nums[i];
          while(j<k){
             if((nums[j]+nums[k])>sum_required){
                k--;
             }else if((nums[j]+nums[k])<sum_required){
                j++;
             }else{
              vector<int>temp={nums[i],nums[j],nums[k]};
              st.insert(temp);
              j++;
              k--;
             }
          }
        }
                vector<vector<int>>ans(st.begin(),st.end());

        return ans;
    }
};
