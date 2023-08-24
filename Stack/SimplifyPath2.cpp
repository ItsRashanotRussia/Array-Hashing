#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <sstream>

using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        stack<string> stk;  //create a sack 
        string dir;

        //Loop through each character
        for (int i = 0; i < path.size(); ++i) {
          
            while (i < path.size() && path[i] == '/')
                ++i;

            dir.clear();  //clear the dir string 
             
            while (i < path.size() && path[i] != '/')
                dir += path[i++];

            //handle ".." to go up one level in the directory structure
            if (dir == ".." && !stk.empty())
                stk.pop();
            // ignore "."
            // ignore empty components 
            else if (dir != "." && dir != "")
                stk.push(dir);  //push valid directory names in the stack
        }

        stringstream result;
        while (!stk.empty()) {
            result << "/" << stk.top() << result.str();  //append 
            stk.pop();  //remove the component from the stackr
        }

        //return the directory if the result is empty
        return result.str().empty() ? "/" : result.str();
    }
};

int main() {
    Solution solution;
    string path = "/a/./b/../../c/";
    cout << "Simplified path: " << solution.simplifyPath(path) << endl;
    return 0;
}
