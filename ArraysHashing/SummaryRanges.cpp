#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        //vector to store the ranges as strings
        vector<string> result;

        //we need the input array size
        int n = nums.size();

        //for empty arrays, we return empty result vec
        if (n == 0)
            return result;

        //initialize the starting point of the current range
        int start = nums[0];

        //loop through the array
        for (int i = 0; i < n; i++) {
            //Check if we've reached the end of the array or if the next number is not consecutive
            if (i == n - 1 || nums[i] + 1 != nums[i + 1]) {
                //if the current range has only one element, add it to the result as a string
                if (nums[i] == start)
                    result.push_back(to_string(start));
                else
                    //if the current range has more than one element, add it to the result as a range string
                    result.push_back(to_string(start) + "->" + to_string(nums[i]));

                //update the starting point for the next range
                if (i != n - 1)
                    start = nums[i + 1];
            }
        }

        return result;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {0, 1, 2, 4, 5, 7};
    vector<string> result = solution.summaryRanges(nums);

    for (const string& range : result) {
        cout << range << " ";
    }

    return 0;
}


// if( i == n-1 || nums[i]+1 != nums[i+1])
                //if(nums[i] != )
