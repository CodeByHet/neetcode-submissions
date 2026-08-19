class Solution {
public:

    vector<int> previoussmaller(vector<int>& nums) {
        vector<int> ans;
        stack<int> st;

        for (int i = 0; i < nums.size(); i++) {

            while (!st.empty() && nums[st.top()] >= nums[i]) {
                st.pop();
            }

            if (st.empty()) {
                ans.push_back(-1);
            }
            else {
                ans.push_back(st.top());
            }

            st.push(i);
        }

        return ans;
    }


    vector<int> nextsmaller(vector<int>& nums) {
        vector<int> ans;
        stack<int> st;

        for (int i = nums.size() - 1; i >= 0; i--) {

            while (!st.empty() && nums[st.top()] >= nums[i]) {
                st.pop();
            }

            if (st.empty()) {
                ans.push_back(nums.size());
            }
            else {
                ans.push_back(st.top());
            }

            st.push(i);
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }


    int largestRectangleArea(vector<int>& heights) {

        vector<int> left = previoussmaller(heights);
        vector<int> right = nextsmaller(heights);

        int maxwater = 0;

        for (int i = 0; i < heights.size(); i++) {

            int width = right[i] - left[i] - 1;

            int area = heights[i] * width;

            maxwater = max(maxwater, area);
        }

        return maxwater;
    }
};