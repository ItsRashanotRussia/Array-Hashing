#include <iostream>
#include <string>

using namespace std;
//
int countBinarySubstrings(string s) {
    int n = s.size();//to get the length of the input string
    int count = 0;//variable to count valid substrings
    int ones = 0;//initialize a counter for ones
    int zeros = 0;//initialize a counter for zeros

    //loop though eachh char
    for (int i = 0; i < n; i++) {
        //check if the current character is '1'
        if (s[i] == '1') {
            ones++;//incremen
            if (zeros > 0) {
              ///count valid substrings when switching from 0s to 1s
                count += min(ones, zeros);
                zeros = 0;//rest th 0 counter
            }
        }
        //check if the current character is 0
        if (s[i] == '0') {
            zeros++;
            if (ones > 0) {
                count += min(ones, zeros);//count again (count += min(ones, zeros))
                ones = 0;
            }
        }
    }
    
    count += min(ones, zeros);
    
    return count;//total substrings
}
//main
int main() {
    string input = "00110011";
    int result = countBinarySubstrings(input);
    cout << "Output: " << result << endl;
    
    return 0;
}
