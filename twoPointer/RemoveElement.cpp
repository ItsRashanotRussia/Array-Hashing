#include <string>
#include <vector>

using namespace std;
//defining the removeElement function 
int removeElement(vector<int>& nums, int val) {
    int j = 0; //keeping track of the index for the modified array
    
  
    for (int i = 0; i < nums.size(); i++) { //loop through each element in num
        if (nums[i] != val) { // we have to check if it's equal to val
            nums[j] = nums[i]; // if not assign the value of nums[i] to nums[j]
            
            j++; //increment to indicate the next poition
        }
    }
    
    // j == new length of the modified array
    //new length == the count of elements that are not equal to val
    return j;
}
