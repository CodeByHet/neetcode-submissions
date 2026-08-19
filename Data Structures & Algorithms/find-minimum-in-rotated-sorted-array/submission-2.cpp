class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();

        if (n == 1 || nums[0] > nums[1])
            return 0;

        for (int i = 1; i < n - 1; i++) {
            if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1])
                return i;
        }

        return n - 1;
    }

    int findMin(vector<int>& nums) {
        int peak = findPeakElement(nums);

        if (peak == nums.size() - 1)
            return nums[0];

        if (peak == 0)
            return nums[1];

        return min(nums[0], nums[peak + 1]);
    }
};