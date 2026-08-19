class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int i = 0;
        int j = 0;
        int count = 0;
        int n = nums1.size() + nums2.size();

        if (n % 2 != 0)
        {
            int index = (n + 1) / 2;

            while (i != nums1.size() && j != nums2.size())
            {
                if (nums1[i] <= nums2[j])
                {
                    count++;

                    if (count == index)
                        return nums1[i];

                    i++;
                }
                else
                {
                    count++;

                    if (count == index)
                        return nums2[j];

                    j++;
                }
            }

            while (i != nums1.size())
            {
                count++;

                if (count == index)
                    return nums1[i];

                i++;
            }

            while (j != nums2.size())
            {
                count++;

                if (count == index)
                    return nums2[j];

                j++;
            }
        }
        else
        {
            int index1 = n / 2;
            int index2 = (n / 2) + 1;

            int val1 = 0;
            int val2 = 0;

            while (i != nums1.size() && j != nums2.size())
            {
                if (nums1[i] <= nums2[j])
                {
                    count++;

                    if (count == index1)
                        val1 = nums1[i];

                    if (count == index2)
                    {
                        val2 = nums1[i];
                        return (val1 + val2) / 2.0;
                    }

                    i++;
                }
                else
                {
                    count++;

                    if (count == index1)
                        val1 = nums2[j];

                    if (count == index2)
                    {
                        val2 = nums2[j];
                        return (val1 + val2) / 2.0;
                    }

                    j++;
                }
            }

            while (i != nums1.size())
            {
                count++;

                if (count == index1)
                    val1 = nums1[i];

                if (count == index2)
                    return (val1 + nums1[i]) / 2.0;

                i++;
            }

            while (j != nums2.size())
            {
                count++;

                if (count == index1)
                    val1 = nums2[j];

                if (count == index2)
                    return (val1 + nums2[j]) / 2.0;

                j++;
            }
        }

        return 0;
    }
};