class Solution {
public:

    bool found(int ele, const vector<int>& nums){
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == ele)
                return true;
        }
        return false;
    }

    int longestConsecutive(vector<int>& nums) {

        if(nums.empty()) return 0;

        int ans = 1;

        for(int i = 0; i < nums.size(); i++){

            int elem = nums[i];
            int count = 1;

            elem++;

            while(found(elem, nums)){
                count++;
                elem++;
            }

            ans = max(ans, count);
        }

        return ans;
    }
};