class Solution {
public:
void merge(vector<int> &nums1, vector<int> &nums2, vector<int> &ans)
{
    int i = 0;
    int j = 0;
    while (i != nums1.size() && j != nums2.size())
    {
        if (nums1[i] <= nums2[j])
        {
            ans.push_back(nums1[i]);
            i++;
        }
        else
        {
            ans.push_back(nums2[j]);
            j++;
        }
    }
    while (i != nums1.size())
    {
        ans.push_back(nums1[i]);
        i++;
    }
    while (j != nums2.size())
    {
        ans.push_back(nums2[j]);
        j++;
    }
}
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        merge(nums1,nums2,ans);
            int n = ans.size();
    if (n % 2 != 0)
    {
        int mid = ((n + 1) / 2) - 1;
        return float(ans[mid]);
    }
    else
    {
        int mid1 = (n / 2) - 1;
        int mid2 = (n / 2);
        float midian = float(ans[mid1] + ans[mid2]) / float(2);
        return midian;
    }
    }
};
