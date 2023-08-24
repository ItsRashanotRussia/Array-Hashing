#include <iostream>
#include <string>
#include <vector>

using namespace std;
//

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result(nums1.size(), -1);

        //iterating through nums1 to find the corresponding indices in nums2
        for (int i = 0; i < nums1.size(); ++i) {
            int index = -1;
            for (int j = 0; j < nums2.size(); ++j) {
                if (nums2[j] == nums1[i]) {
                    index = j;
                    break;
                }
            }

            //finding the next greater element in nums2 from the found index
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
