class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int l = 0;
        int h = nums.size() - 1;
        while (l <= h)
        {
            int mid = l + (h - l) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[l] <= nums[mid])
            { // ye left vala part sorted hai
                if (target < nums[mid] && target >= nums[l])
                {
                    h = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            else if (nums[mid] <= nums[h])
            { // ye right vala part sorted hai
                if (nums[mid] < target && target <= nums[h])
                {
                    l = mid + 1;
                }
                else
                {
                    h = mid - 1;
                }
            }
        }
        return -1;
    }
};
