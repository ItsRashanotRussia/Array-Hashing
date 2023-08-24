#include <vector>

class Solution {
public:
    std::vector<int> nextGreaterElement(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::vector<int> result(nums1.size(), -1);

        // Traverse nums1 to find the corresponding indices in nums2
        for (int i = 0; i < nums1.size(); ++i) {
            int index = -1;
            for (int j = 0; j < nums2.size(); ++j) {
                if (nums2[j] == nums1[i]) {
                    index = j;
                    break;
                }
            }

            // Find the next greater element in nums2 starting from the found index
            for (int j = index + 1; j < nums2.size(); ++j) {
                if (nums2[j] > nums1[i]) {
                    result[i] = nums2[j];
                    break;
                }
            }
        }

        return result;
    }
};
