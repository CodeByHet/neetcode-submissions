class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> ans(nums.size(), 0);

        int prod = 1;
        int zero = 0;

        // Count zeros and calculate product
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                zero++;
            } 
            else {
                prod *= nums[i];
            }
        }

        // 2 or more zeros
        if(zero >= 2) {
            return ans;
        }

        // Exactly 1 zero
        if(zero == 1) {
            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] == 0) {
                    ans[i] = prod;
                }
            }
            return ans;
        }

        // No zeros
        for(int i = 0; i < nums.size(); i++) {
            ans[i] = prod / nums[i];
        }

        return ans;
    }
};