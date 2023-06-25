#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int strStr(const string& haystack, const string& needle) {
        if (needle.empty())
            return 0;
        
        int haystackLength = int(haystack.length());
        int needleLength = int(needle.length());
        
        for (int i = 0; i <= haystackLength - needleLength; ++i) {
            if (haystack[i] == needle[0] && haystack.substr(i, needleLength) == needle)
                return i;
        }

        return -1;
    }
};

int main() {
    Solution solution;
    string haystack = "sadbutsad";
    string needle = "sad";

    int index = solution.strStr(haystack, needle);

    cout << "output";
    if (index != -1)
        cout << index;
    cout << endl;

    return 0;
}

//Inside the loop, check if the character at index i in haystack is equal to the first character of needle.

/*
        else {
            for (int i = 0; i <= static_cast<int>(haystack.length()) - static_cast<int>(needle.length()); ++i) {
                if (haystack[i] == needle[0]) {
                    if (haystack.substr(i, needle.length()) == needle)
                        return i;
                }
            }
            
*/
